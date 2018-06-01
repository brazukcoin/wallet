// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers, The Karbowanec developers, The Brazukcoin developers
// Copyright (c) 2018, The Brazukcoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <cstdint>


namespace CryptoNote {
namespace parameters {

const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x29d0;
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 500;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

const uint64_t MONEY_SUPPLY                                  = UINT64_C(10000000000000000000);  // MONEY_SUPPLY - total number coins to be generated
const uint64_t TAIL_EMISSION_REWARD                          = UINT64_C(1000000000000);
const size_t CRYPTONOTE_COIN_VERSION                         = 1;
const unsigned EMISSION_SPEED_FACTOR                         = 18;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;

const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 1000000;  // size of block (in bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 100000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 1000000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V4  = 1000000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;

const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 12;
const uint64_t MINIMUM_FEE                                   = UINT64_C(100000000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(100000000);

const uint64_t DIFFICULTY_TARGET                             = 240;  // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const size_t   DIFFICULTY_WINDOW_V2                          = 17;  // blocks
const size_t   DIFFICULTY_WINDOW_V3                          = 60 + 1;  // blocks
const size_t   DIFFICULTY_WINDOW_V4                          = 60;  // blocks
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 1000000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;  // seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7;  // seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2                             = 18500;
const uint32_t UPGRADE_HEIGHT_V3                             = 40000;
const uint32_t UPGRADE_HEIGHT_V4                             = 50000;

const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;  // percent
const uint32_t   UPGRADE_VOTING_WINDOW                       = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t   UPGRADE_WINDOW                              = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks

static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
}  // namespace parameters

const char     CRYPTONOTE_NAME[]                             = "brazukcoin";
const char     GENESIS_COINBASE_TX_HEX[]                     = "010a01ff0001fac484c69cd608029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd0880712101f66acaf48eeb524db6f561ed5081438264d00f292783b1b0995bc71ec05e6600";

const uint8_t  CURRENT_TRANSACTION_VERSION                   = 1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         = 1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         = 2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         = 3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         = 4;
const uint8_t  BLOCK_MINOR_VERSION_0                         = 0;
const uint8_t  BLOCK_MINOR_VERSION_1                         = 1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        = 10000;  // by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            = 200;  // by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         = 1000;

const int      P2P_DEFAULT_PORT                              = 44044;
const int      RPC_DEFAULT_PORT                              = 44043;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                = 1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 = 5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024;  // 16 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;    //  seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;  // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;  // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;  // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000;  // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;  // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115";

const char* const SEED_NODES[] = {
    "212.237.21.235:44044",
    "195.181.219.81:44044"
};

struct CheckpointData {
    uint32_t height;
    const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
    { 1984, "09d2e9fe95143685f823db0dccb53fe847f6223324b9001e5ef1c9b2f2ac46f6" },
    { 3968, "13c3e7692bdace890976d6bb0a4acd9202be5a8ef6cb0722ef3682b7594377d7" },
    { 5952, "d12b76f4322a33895f85350acee9a1b72f29eb381d6a9eb8978b7cffb93444cf" },
    { 7936, "4a75cc598e4c53533fb2cb26423563ddbe47a2c5109ae40e3967da4d472a8d24" },
    { 9920, "2bc30a1d555f3f56d66eadb8d443e096a1d56d4f38acd9327bc17d16a981d36f" },
    { 11904, "812ad851c766a4e17a2a1ba11cdd16b91caec86ba74f742d3a8c6f5486c9cb26" },
    { 13888, "17ed08363437e18891e8bcf3a95bf68a28e8c91cecbd9a381c627c8ae5f34d81" },
    { 15872, "5802fb368b199b323a79d2f72b1b639a3f4a62d896b61665a9aafc0194b52687" },
    { 17856, "ccd3e3fa12bb56694a04fc5aed2a8546ec95a4073ef019f639be9a567ab6b73e" },
    { 19840, "9f1dd8c2bb42525c66ee991405b35263e31793ce7b689f0840430e5f3c20d7f3" },
    { 21824, "a6652f8d75c8b1b2a6aa620ce35e2a08802b328af1e978d995df538a6bb2ee63" },
    { 23808, "38d9b9d5ceceacd5b533390ebad7c13a4a0405296d09dacde37f77b98d2e7574" },
    { 25792, "eace0b97e1b5438abfdf902ecf8f60543d8cbbf0af899e041b3557eecef696f7" },
    { 27776, "f30829247ea1d2beb3953d8e22673b07455b97a0213c375b2c99c75bfa56fed2" },
    { 29760, "a38e038069f4c5143c56b31c851ff92eca8e1cecbe103d395b25451bbbfc5ccd" },
    { 31744, "aaab1d856bddaa5fe6a7e8542862570fe9107925cbe8957cc07b2d08b2c210f3" },
    { 33728, "19dc310013e45ad2355596997b27597b1a451ec4afae98a5b39de919ae40987f" },
    { 35712, "37c4b7e38531d6e55d1f912944fd46a2b659b8522cc9ee2754ded0602c7e8096" },
    { 37696, "af44faaa535c34d697b6fb0afd3cbede076f3eaaca6b7f07efd57878d3f1958e" },
    { 39680, "73654739324d2efcd645d5d20b837c8eed94333d550bfe288eac979ac3ae5473" },
    { 41664, "5f6adafe3e2cc400647d677e1dd511f9dbef0fc43472d2dd13a100ddc1ab087a" },
    { 43648, "f94ed1b328fdb4045ae6fdf76a4046f6621e09385a14457fdeb1e3d62fd19eca" }
};

}  // namespace CryptoNote

#define ALLOW_DEBUG_COMMANDS


