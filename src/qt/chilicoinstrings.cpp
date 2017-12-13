

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *chilicoin_strings[] = {
QT_TRANSLATE_NOOP("chilicoin-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("chilicoin-core", " mints updated, "),
QT_TRANSLATE_NOOP("chilicoin-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Cannot obtain a lock on data directory %s. ChiliCoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Disable all ChiliCoin specific functionality (Masternodes, Obfuscation, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Enable automatic wallet backups triggered after each zPhr minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Fees (in CHILI/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Fees (in CHILI/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"To use chilicoind, or the -server option to chilicoin-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=chilicoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"ChiliCoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Unable to bind to %s on this computer. ChiliCoin Core is probably already running."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 500 CHILI."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Unable to locate enough funds for this transaction that are not equal 500 "
"CHILI."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong ChiliCoin Core will not work properly."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("chilicoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("chilicoin-core", "(63891 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("chilicoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "(default: 1)"),
QT_TRANSLATE_NOOP("chilicoin-core", "(must be 63891 for mainnet)"),
QT_TRANSLATE_NOOP("chilicoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("chilicoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("chilicoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("chilicoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("chilicoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("chilicoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("chilicoin-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("chilicoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("chilicoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("chilicoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("chilicoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("chilicoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("chilicoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("chilicoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("chilicoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("chilicoin-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("chilicoin-core", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("chilicoin-core", "Copyright (C) 2017-%i The ChiliCoin Core Developers"),
QT_TRANSLATE_NOOP("chilicoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("chilicoin-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("chilicoin-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("chilicoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("chilicoin-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("chilicoin-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("chilicoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("chilicoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("chilicoin-core", "Done loading"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("chilicoin-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("chilicoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error loading wallet.dat: Wallet requires newer version of ChiliCoin Core"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("chilicoin-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("chilicoin-core", "Error"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("chilicoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("chilicoin-core", "Failed to read block index"),
QT_TRANSLATE_NOOP("chilicoin-core", "Failed to read block"),
QT_TRANSLATE_NOOP("chilicoin-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("chilicoin-core", "Fee (in CHILI/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("chilicoin-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("chilicoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("chilicoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("chilicoin-core", "Importing..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("chilicoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("chilicoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("chilicoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("chilicoin-core", "Information"),
QT_TRANSLATE_NOOP("chilicoin-core", "Initialization sanity check failed. ChiliCoin Core is shutting down."),
QT_TRANSLATE_NOOP("chilicoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("chilicoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("chilicoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid private key."),
QT_TRANSLATE_NOOP("chilicoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("chilicoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("chilicoin-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("chilicoin-core", "Less than 3 mints added, unable to create spend"),
QT_TRANSLATE_NOOP("chilicoin-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Line: %d"),
QT_TRANSLATE_NOOP("chilicoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("chilicoin-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Masternode options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("chilicoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("chilicoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("chilicoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("chilicoin-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("chilicoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("chilicoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("chilicoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("chilicoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("chilicoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("chilicoin-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("chilicoin-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("chilicoin-core", "Percentage of automatically minted Zerocoin  (10-100, default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Print version and exit"),
QT_TRANSLATE_NOOP("chilicoin-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("chilicoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("chilicoin-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("chilicoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("chilicoin-core", "Recalculating coin supply may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Recalculating supply statistics may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("chilicoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("chilicoin-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("chilicoin-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("chilicoin-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("chilicoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("chilicoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("chilicoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Signing failed."),
QT_TRANSLATE_NOOP("chilicoin-core", "Signing timed out."),
QT_TRANSLATE_NOOP("chilicoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("chilicoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Staking options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("chilicoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("chilicoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("chilicoin-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("chilicoin-core", "This help message"),
QT_TRANSLATE_NOOP("chilicoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("chilicoin-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("chilicoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("chilicoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("chilicoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("chilicoin-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("chilicoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("chilicoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("chilicoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("chilicoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("chilicoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("chilicoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("chilicoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("chilicoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("chilicoin-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("chilicoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("chilicoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("chilicoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("chilicoin-core", "Wallet needed to be rewritten: restart ChiliCoin Core to complete"),
QT_TRANSLATE_NOOP("chilicoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Wallet window title"),
QT_TRANSLATE_NOOP("chilicoin-core", "Warning"),
QT_TRANSLATE_NOOP("chilicoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("chilicoin-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("chilicoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("chilicoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("chilicoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("chilicoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("chilicoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("chilicoin-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("chilicoin-core", "failed to validate zerocoin"),
QT_TRANSLATE_NOOP("chilicoin-core", "on startup"),
QT_TRANSLATE_NOOP("chilicoin-core", "wallet.dat corrupt, salvage failed"),
};
