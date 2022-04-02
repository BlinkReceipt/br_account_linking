# Change Log

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

