# Change Log

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

## [1.0.2](https://github.com/BlinkReceipt/br_account_linking/releases/tag/1.0.2) (08/11/2020)

---
## [0.0.1](https://github.com/BlinkReceipt/br_account_linking/releases/tag/0.0.1)
- Initial release
