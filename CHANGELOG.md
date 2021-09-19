# Change Log

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

--
## [1.2.1](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.2.1) (03/06/2021)
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
    * Authentication bugfixes and improvements
    * In-Store orders support
* `Best Buy`, `Starbucks`, `Walgreens`
    * Authentication bugfixes and improvements
* `CVS`
    * Returning incorrect orders sometime
    * Randomly failing to authenticate
* `Walmart`
    * Improved parsing on cash orders

---
## [1.1.3](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.1.3) (02/04/2021)
#### Added
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
## [1.1.2](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.1.2) (11/04/2020)

#### Updated
* Product Intelligence improvements


---
## [1.1.1](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.1.1) (10/15/2020)

#### Updated
* Min iOS version >= 10.0


#### Fixed
* `Publix` 
    * Failing to authenticate with valid credentials
* `Target`
    * Successful return with empty list if no orders are found


---
## [1.1.0](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.1.0) (10/12/2020)
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
## [1.0.2](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.0.2) (08/11/2020)

---
## [0.0.1](https://github.com/BlinkReceipt/br_account_linking/releases/tag/0.0.1)
- Initial release
