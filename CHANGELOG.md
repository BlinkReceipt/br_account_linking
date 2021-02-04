# Change Log

## [1.1.3](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.1.0) (02/04/2021)
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
