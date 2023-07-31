# Change Log

## 2.5.23
* `Walmart`
    * Fixed an issue preventing us from returning all orders in the account
* `Dollar General`, `DoorDash`, `Sprouts`, `Costco`
    * Authentication improvements
* `Sam's Club`
    * Authentication improvements
    * Added stability improvements for Android
* `Instacart`
    * Improved support for `Pickup` and `Delivery` purchase types
    * Improved support for `cancelled` and `completed` order status

---
## 2.5.19
* `Walmart Canada`
    * Added suppord for `Pickup` & `Delivery` purchase types
    * Fixed payment info parsing
    * Improved fetching of the orders
* `Instacart`
    * Authentication improvements
* `Target`
    * Fixed `Pickup` orders not being returned
* `Sprouts`
    * Fixed online orders not being returned
    * Added support for `completed` and `refunded` order statuses
* `Wegmans`
    * Added suuport for `Pickup` purchase type
    * Added support for `cancelled` order status
* `Amazon`
    * Stability improvements
    * Fixed parsing of `Amazon Store` orders
    * Added support for `Registry` contributions
* `CVS`
    * Added 2FA support
* `Kroger`, `Food 4 Less`, `Fred Meyer`, `Harris Teeter`, `Ralphs`, * `ShopRite`, * `Starbucks`
   * General improvements and optimizations
* `Walmart` 
    * Improved authentication support for account with 2FA enabled
    * Improved fetching of the orders

---
## 2.5.7
* Added: Stability improvements for `Walmart`, `Kroger`, `Amazon`, `DoorDash`
* Logging improvements
* `Kroger`
    * Improved `fullPrice` support
* `Amazon` 
    * Improved error handling during authentication

---
## 2.5.0
* Added option to cancel alp operation
* Added option to see account linking version
* `Dollar General`
    * Fixed an issue when linking account with 2FA
    * Return `ereceiptPurchaseType` and `purchaseType` with possible values: `Delivery`
    * Return `ereceiptOrderStatus` with possible values: `ordered`
    * Return `shipments` for `Delivery` orders
    * Return `storeNumber`
    * Return `coupons` if available
    * Improved fetching of the orders
* `Sam's Club`
    * Fixed an issue when linking account with 2FA
    * Return `ereceiptPurchaseType` with possible values: `Delivery`
    * Return `ereceiptOrderStatus` with possible values: `completed`
    * Return `shipments` for `Delivery` orders
    * Improved fetching of the orders
* `Amazon`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Fixed `ereceiptPurchaseType` for `fresh` and `whole foods` orders
    * Improved parsing of orders
* `Albertsons`, `Acme Markets`, `Jewel Osco`, `Safeway`, `Vons`
    * Improved merchant stability for Android
    * Fixed an issue when linking some accounts
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Added support for a `Pickup` orders
    * Added support for `ereceiptOrderStatus` with possible values: `ordered` and `cancelled`
    * Return `Shaw’s` or `Star Market` as `merchantName` when detected
* `Costco`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return product's `unitPrice`
    * Return `ereceiptPurchaseType` and `purchaseType` with possible values: `Delivery`, `In-Store` 
    * Return `ereceiptOrderStatus` with possible values: `complete`, `shipped`, `cancelled` 
    * Return `transactionId` for `In-Store` orders
    * Return `shipments` for `Delivery` orders
* `Target`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Fixed an issues with not fetching some orders
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `In-Store`, `Pickup`, `Delivery`
* `Walmart`
    * Fixed a callback never called issue when invalid credentials are provided
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `In-Store`, `Pickup`, `Delivery`
* `Kroger`, `Food 4 Less`, `Fred Meyer`, `Harris Teeter`, `Ralphs`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `In-Store` instead of `in-store` order type
    * Return `In-Store` instead of `fuel` order type
    * Return `purchaseType`
    * Added support for `Pickup` and `Delivery` order types
    * Added stability imrpovements when linking an account
* `Wegmans`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `In-Store` and `Delivery`
    * Added support for `Delivery` order types
* `CVS`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `Pickup` and `Delivery`
    * Return `completed` when an order status is `delivered`
    * Added stability improvements when linking an account
* `Walgreens`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `Delivery`
    * Return `shipments` for `Delivery` orders
* `Lowe's`
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` and `ereceiptPurchaseType` with values: `Pickup` and `Delivery`
    * Return `ereceiptOrderStatus` or shipment `status` with possible values: `completed`, `returned`, `cancelled`, `shipped`, `ordered`  
* `Home Depot`
    * Fixed an issue when linking some accounts
    * Fixed an issue with merchant returning previously fetched orders when `returnLatestOrdersOnly` is enabled
    * Return `purchaseType` with possible values: `In-Store` and `Delivery`  
    * Return `ereceiptOrderStatus` or `shippingStatus` with possible values `completed` or `ordered`
* `Uber Eats`
    * Fixed an issue when linking some accounts
    * Return `ereceiptOrderStatus` with possible values:  `ordered`, `completed`, `cancelled`
    * Return `products` list for `Pickup` order types and `shipments` list for a `Delivery` order types
    * `ereceiptPurchaseType` returns only: `Delivery` or `Pickup`
* `ShopRite`
    * Fixed: Account linking issues

---
## 2.4.12
* `Walmart`
    * Add support for `ereceiptPurchaseType`: `in-store`, `online`
    * Add support for product `ereceiptOrderStatus`: `completed`, `cancelled`, `ordered`
    * Return `transactionId` for `in-store` order type
    * Add support for a new authentication flow
    * Shipment status improvements
    * Return multiple shipments, if available
    * Fix OTP authentication flow
    * Stability improvements in old SDKs
* `Walgreens`
    * Add support for `ereceiptPurchaseType`: `in-store`, `online`
    * Add support for `product`->`shippingStatus` and `shipment`->`status`. Expected values are: `completed`, `shipped`
    * Return product `totalPrice`
    * Stability improvements in old SDKs
* `Instacart`
    * Fix random issue when fetching lots of orders
* `CVS`
    * Add support for `ereceiptPurchaseType`: `in-store`
    * Add support for product `ereceiptOrderStatus`: `completed`, `cancelled`
    * Return `transactionId` for `in-store` order type
    * Stability improvements in old SDKs
* `Publix`
    * Add support for `ereceiptPurchaseType`: `in-store`
    * Add support for `product`->`shippingStatus` and `shipment`->`status`. Expected values are: `completed`, `shipped`
    * Return product `totalPrice`
* `Sprouts`
    * Add support for `ereceiptPurchaseType`: `in-store`
    * Add support for product `ereceiptOrderStatus`: `cancelled`
    * Return `transactionId` for `in-store` order type
* `ShopRite`
    * Fix connection issues
    * Add support for an `in-store` order type
* `Target`, `Amazon`, `Costco`, `Kroger`
    * Stability improvements in old SDKs

* General improvements and optimizations

--- 
## 2.4.0

* Add `Albertsons` support
* Add `Jewel Osco` support
* Add `Safeway` support
* Add `Vons` support
* Add `Acme Markets` support
* Add `Harris Teeter` support
* Add `Fred Meyer` support
* Add `Food 4 Less` support
* Add `Ralphs` support
* `Kroger`
    * Improved order status support
    * Returning orders from related merchants (`Harris Teeter`, `Pick 'n Save`) with propeply mapped `merchantName` and `retailerId`
* `CVS`, `Starbucks`
    * User authentication improvements
* Improved logging
  
---
## 2.3.22 

* `Walmart`
    * Improved fetching of orders
* `Kroger`, `AmazonBeta`
    * General improvements
  
---
## 2.3.16

* `Instacart`, `UberEats`, `Publix`
    * Authentication bug fixes and improvements

---
## 2.3.13

* `Walmart`, `GAP`
    * Authentication flow improvements
* `AmazonBeta`
    * Add support for product: `seller`, `condition`, `productUrl`, `currencyCode`, `subscriptionFrequency`
    * Add support fot ereceipt `currencyCode`
    * Fixed bug failing to return products for some orders
    * Fixed bug failing to return correct shipping status 

---
## 2.3.8

* `Amazon`
    * AmazonGo order support
    * Authentication flow improvements
    * Improved analytics
    * Improved 2FA support
    * Fixed bug failing to return prices of some Canadian orders
    * Fixed bug intermittently not completing when no new orders are found
    * Other bug fixes and optimizations
* `Walmart`
    * Authentication improvements
* `GAP`
    * Improved fetching of orders
* `Kroger`
    * Authentication improvements

---
## 2.3.7 (OTA)

#### Fixed
* `Amazon`
    * Doesn't complete sometime when no new orders are found
* `GAP`
    * Improved fetching of orders from multiple pages

---
## 2.3.6 (OTA)

#### Fixed
* `Amazon`
    * Failed to return prices of some canadian orders

---
## 2.3.5 (OTA)

#### Fixed
* `Amazon`
    * big fixes and optimizations

---
## 2.3.4 (OTA)

#### Fixed
* `Amazon`
    * AmazonGo orders support

---
## 2.3.3 (OTA)

#### Fixed
* `Walmart`
    * Add support for the new Walmart authentication flow

---
## 2.3.2 (OTA)

#### Fixed
* `Amazon`
    * Authentication flow improvements
    * Analytics improvements
    * New 2FA url support

---
## 2.3.0

#### Add
* `Sprouts`, `GAP`, `Ulta Beauty`
* `Amazon`
    * User authentication optimizations
    * `AmazonBeta` support
* Android performance optimizations

---
## 2.2.4 (OTA)

#### Add
* `Amazon`
    * Enable more logs

---
## 2.2.2

#### Fixed
* `Shipt`
    * Fixed `retailerId` and resolved a random exception when user is authenticated
* `Starbucks`
    * Order parsing fixes due to merchant changes 
#### Add
* `Amazon`
    * Add Digital orders support

---
## 2.2.1

#### Fixed
* `Amazon`
    * User authentication optimizations

---
## 2.2.0

#### Add
* `Amazon`
    * Performance optimizations
    * Return `PaymentMethods`, `Tax Amount`, `Delivery Address`, `Shipping Amount` and a flag when it is a subscription order, 

---
## 2.1.1

#### Add
* `Best Buy`
    * Add shipments for online orders
    * Add In-Store orders support
* Performance optimizations

#### Fixed
* `HyVee`, `RiteAid`
    * parse orders improvements
* `Macy's`
    * authentication improvements
* Data quality improvements
* XCode 13 version fix 

---
## 2.1.0

#### Add
* Add `Uber Eats` support
* Ability to resume fetching older orders if available
* `Home Depot`
    * Add In-Store eReceipts support 

#### Fixed
* `Home Depot`, `HyVee`, `Dollar General`, `Giant Eagle`, `RiteAid`
    * User authentication improvements
* `Nike`
    * Orders parsing improvements
* Performance optimizations

---
## 2.0.0

#### Add
* `Staples Canada`, `Walmart Canada`, `Drizly`, `Seamless`
* return `sessionId` for each action
* Swift 5 support

#### Fixed
* `BJ's Wholesale Club`, `Food Lion`, `Dollar Tree`, `Bed Bath & Beyond`, `Costco`, `Home Depot`
    * User authentication improvements
* `DoorDash`, `Lowe's`, `Dollar General`
    * Orders parsing improvements

---
## 1.3.0

#### Fixed
* `Target`
    * Missing order date

---
## 1.2.9

#### Add
* `Walmart`
    * In-Store orders support
* `Target`
    * Add 2FA support

---
## 1.2.8

#### Fixed
* `Walmart`
    * verify account fixed

---
## 1.2.7

#### Added
* `Giant Eagle`
    * Add Captcha support 
* `DoorDash`
    * Add 2FA support

#### Fixed
* `BJ's Wholesale Club`
    * Returns an empty orders list randomly
* `Bed Bath & Beyond`
    * 2FA bug fixes
* `Chewy`, `Domino's Pizza`, `Target`, `Shipt`, `Macy's`, `Nike`, `Instacart`
    * Fix user authentication
* `Dollar Tree`, `Giant Eagle`, `Walmart`, `Starbucks`
    * Retuns no orders
* `ShopRite`
    * Fix order total price
* `Meijer`
    * Overall bug fixes and improvements

### Removed
* `Walmart Grocery`

---
## 1.2.6

#### Added
* Improved analytics

#### Fixed
* OTA updates
* Using backward compatible APIs to support older Android versions
* `Lowe's`
    * Parsing orders improvements
* `Costco`
    * Returns no orders
* `GrubHub`
    * Returns no orders randomly
* `Shipt`
    * Retuns no orders
* `Staples`
    * User authentication fails
* `Shipt`
    * Add Android support


---
## 1.2.2


#### Fixed
* OTA updates
* Shipt `unitPrice` returning NaN some time



---
## 1.2.1


#### Added
* Add XCFramework support



---
## 1.2.0


#### Added
* Add DoorDash support
* Add Dollar General support
* Add Sam's Club support
* Add Food Lion support
* Add Domino's Pizza support
* Add Family Dollar support
* Add Dollar Tree support
* Add Dick's Sporting Goods support
* Add TJ Maxx support
* Add Marshalls support
* Add Giant Eagle support
* Add Nike support
* Add HyVee support
* Add H-E-B support
* Add Bed Bath & Beyond support
* Add BJ's Wholesale Club support
* Add Rite Aid support

#### Fixed
* `Lowe's`
    * Authentication issues
    * In-Store orders support
* `Best Buy`, `Starbucks`, `Walgreens`
    * Fails to authenticate user sometime
* `CVS`
    * Returning incorrect orders data sometime
    * Failing to authenticate user randomly
* `Walmart`
    * Improved parsing on cash orders



---
## 1.1.3


#### Added
* Android support
* Add HomeDepot support (Online orders only)
* Add Costco support
* Add Meijer support
* Add ShopRite support
* Add Lowe's support
* Add Best Buy support
* Add Kohl's support
* Add CVS support
* Add Chewy support
* Add Sephora support
* Add Macy's support
* Add Staples support
* Add GrubHub support

#### Fixed
* OTA update improvements
* `Wegmans`
    * Android authentication fix
* `Starbucks`
    * Sometime an invalid storeNumber is returned
* `Target`
    * Missing `subtotal` and `tax` for some orders
* `Kroger`
    * Returning duplicate orders for some `cutOff` ranges
* `Walgreens`
    * Fetching orders bug fixes


#### Updated
* Speed improvements and general optimizations



---
## 1.1.2


#### Updated
* Product Intelligence improvements


---
## 1.1.1


#### Updated
* Min iOS version >= 10.0


#### Fixed
* `Publix` 
    * Failing to authenticate with valid credentials
* `Target`
    * Successful return with empty list if no orders are found

    
---
## 1.1.0

#### Added
* `Instacart`
    * Captcha support when authenticating
* `Shipt` support 
* `Starbucks` support
* OTA updates with versioning so only retailers supported by the SDK can run.
* Ability to specify exact `CutOffDate` parameter when fetching new orders.


#### Updated
* Improved Unit Tests
* Renamed `config.alp` -> `retailers.alp`
* Speed improvements and code optimizations


#### Fixed
* `Walmart` 
    * Failing to authenticate randomly
    * Support for new APIs
    * Missing the payment card type 
* `Walmart Grocery`
    * Support for new APIs
* `Walgreens`
    * Support for their new login flow
    * Not returning correct `cacheIdentifier` value
* `VerifyAccount` action doesn't return response some time when 2FA or captcha is enabled
* OTA update so only newer versions are accepted  


---
## [1.0.0](https://github.com/BlinkReceipt/account_linking/releases/tag/v1.0.0) (07/14/2020)

