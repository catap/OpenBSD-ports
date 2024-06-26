MODGO_MODULES =	\
	cloud.google.com/go								 v0.112.0 \
	cloud.google.com/go/compute							 v1.24.0 \
	cloud.google.com/go/compute/metadata						 v0.2.3 \
	cloud.google.com/go/iam								 v1.1.2 \
	cloud.google.com/go/pubsub							 v1.33.0 \
	github.com/!azure/azure-sdk-for-go						 v68.0.0+incompatible \
	github.com/!azure/go-autorest							 v14.2.0+incompatible \
	github.com/!azure/go-autorest/autorest						 v0.11.29 \
	github.com/!azure/go-autorest/autorest/adal					 v0.9.22 \
	github.com/!azure/go-autorest/autorest/azure/auth				 v0.5.12 \
	github.com/!azure/go-autorest/autorest/azure/cli				 v0.4.5 \
	github.com/!azure/go-autorest/autorest/date					 v0.3.0 \
	github.com/!azure/go-autorest/autorest/mocks					 v0.4.2 \
	github.com/!azure/go-autorest/autorest/to					 v0.2.0 \
	github.com/!azure/go-autorest/logger						 v0.2.1 \
	github.com/!azure/go-autorest/tracing						 v0.6.0 \
	github.com/!burnt!sushi/toml							 v0.3.1 \
	github.com/!data!dog/appsec-internal-go						 v1.5.0 \
	github.com/!data!dog/datadog-agent/pkg/obfuscate				 v0.48.0 \
	github.com/!data!dog/datadog-agent/pkg/remoteconfig/state			 v0.48.1 \
	github.com/!data!dog/datadog-go/v5						 v5.3.0 \
	github.com/!data!dog/go-libddwaf/v2						 v2.3.2 \
	github.com/!data!dog/go-tuf							 v1.0.2-0.5.2 \
	github.com/!data!dog/gostackparse						 v0.7.0 \
	github.com/!data!dog/sketches-go						 v1.4.2 \
	github.com/!i!b!m/sarama							 v1.40.1 \
	github.com/!microsoft/go-winio							 v0.6.1 \
	github.com/!n!y!times/gziphandler						 v0.0.0-20170623195520-56545f4a5d46 \
	github.com/!shopify/sarama							 v1.38.1 \
	github.com/99designs/gqlgen							 v0.17.36 \
	github.com/agnivade/levenshtein							 v1.1.1 \
	github.com/alecthomas/kingpin/v2						 v2.4.0 \
	github.com/alecthomas/units							 v0.0.0-20211218093645-b94a6e3cc137 \
	github.com/andybalholm/brotli							 v1.0.6 \
	github.com/antonmedv/expr							 v1.15.5 \
	github.com/apparentlymart/go-cidr						 v1.1.0 \
	github.com/armon/go-metrics							 v0.4.1 \
	github.com/armon/go-socks5							 v0.0.0-20160902184237-e75332964ef5 \
	github.com/asaskevich/govalidator						 v0.0.0-20190424111038-f61b66f89f4a \
	github.com/aws/aws-sdk-go							 v1.51.25 \
	github.com/aws/aws-sdk-go-v2							 v1.20.3 \
	github.com/aws/aws-sdk-go-v2/aws/protocol/eventstream				 v1.4.13 \
	github.com/aws/aws-sdk-go-v2/config						 v1.18.21 \
	github.com/aws/aws-sdk-go-v2/credentials					 v1.13.20 \
	github.com/aws/aws-sdk-go-v2/feature/ec2/imds					 v1.13.2 \
	github.com/aws/aws-sdk-go-v2/internal/configsources				 v1.1.40 \
	github.com/aws/aws-sdk-go-v2/internal/endpoints/v2				 v2.4.34 \
	github.com/aws/aws-sdk-go-v2/internal/ini					 v1.3.34 \
	github.com/aws/aws-sdk-go-v2/internal/v4a					 v1.1.3 \
	github.com/aws/aws-sdk-go-v2/service/dynamodb					 v1.21.4 \
	github.com/aws/aws-sdk-go-v2/service/ec2					 v1.93.2 \
	github.com/aws/aws-sdk-go-v2/service/eventbridge				 v1.20.4 \
	github.com/aws/aws-sdk-go-v2/service/internal/accept-encoding			 v1.9.14 \
	github.com/aws/aws-sdk-go-v2/service/internal/checksum				 v1.1.35 \
	github.com/aws/aws-sdk-go-v2/service/internal/endpoint-discovery		 v1.7.34 \
	github.com/aws/aws-sdk-go-v2/service/internal/presigned-url			 v1.9.34 \
	github.com/aws/aws-sdk-go-v2/service/internal/s3shared				 v1.15.3 \
	github.com/aws/aws-sdk-go-v2/service/kinesis					 v1.18.4 \
	github.com/aws/aws-sdk-go-v2/service/s3						 v1.32.0 \
	github.com/aws/aws-sdk-go-v2/service/sfn					 v1.19.4 \
	github.com/aws/aws-sdk-go-v2/service/sns					 v1.21.4 \
	github.com/aws/aws-sdk-go-v2/service/sqs					 v1.24.4 \
	github.com/aws/aws-sdk-go-v2/service/sso					 v1.12.8 \
	github.com/aws/aws-sdk-go-v2/service/ssooidc					 v1.14.8 \
	github.com/aws/aws-sdk-go-v2/service/sts					 v1.18.9 \
	github.com/aws/smithy-go							 v1.14.2 \
	github.com/beorn7/perks								 v1.0.1 \
	github.com/bradfitz/gomemcache							 v0.0.0-20230611145640-acc696258285 \
	github.com/bytedance/sonic							 v1.10.0 \
	github.com/cenkalti/backoff/v3							 v3.2.2 \
	github.com/census-instrumentation/opencensus-proto				 v0.4.1 \
	github.com/cespare/xxhash/v2							 v2.2.0 \
	github.com/chenzhuoyu/base64x							 v0.0.0-20230717121745-296ad89f973d \
	github.com/chenzhuoyu/iasm							 v0.9.0 \
	github.com/chromedp/cdproto							 v0.0.0-20230802225258-3cf4e6d46a89 \
	github.com/chromedp/chromedp							 v0.9.2 \
	github.com/chromedp/sysutil							 v1.0.0 \
	github.com/chzyer/readline							 v1.5.1 \
	github.com/client9/misspell							 v0.3.4 \
	github.com/cncf/udpa/go								 v0.0.0-20191209042840-269d4d468f6f \
	github.com/cncf/xds/go								 v0.0.0-20231128003011-0fa0005c9caa \
	github.com/codahale/rfc6979							 v0.0.0-20141003034818-6a90f24967eb \
	github.com/confluentinc/confluent-kafka-go					 v1.9.2 \
	github.com/confluentinc/confluent-kafka-go/v2					 v2.2.0 \
	github.com/coredns/caddy							 v1.1.1 \
	github.com/coreos/go-semver							 v0.3.0 \
	github.com/coreos/go-systemd/v22						 v22.3.2 \
	github.com/creack/pty								 v1.1.9 \
	github.com/davecgh/go-spew							 v1.1.2-0.20180830191138-d8f796af33cc \
	github.com/denisenkom/go-mssqldb						 v0.11.0 \
	github.com/dgryski/go-farm							 v0.0.0-20190423205320-6a90982ecee2 \
	github.com/dgryski/go-rendezvous						 v0.0.0-20200823014737-9f7001d12a5f \
	github.com/dimchansky/utfbom							 v1.1.1 \
	github.com/dimfeld/httptreemux/v5						 v5.5.0 \
	github.com/dnstap/golang-dnstap							 v0.4.0 \
	github.com/dustin/go-humanize							 v1.0.1 \
	github.com/eapache/go-resiliency						 v1.4.0 \
	github.com/eapache/go-xerial-snappy						 v0.0.0-20230731223053-c322873962e3 \
	github.com/eapache/queue							 v1.1.0 \
	github.com/ebitengine/purego							 v0.6.0-alpha.5 \
	github.com/elastic/elastic-transport-go/v8					 v8.1.0 \
	github.com/elastic/go-elasticsearch/v6						 v6.8.5 \
	github.com/elastic/go-elasticsearch/v7						 v7.17.1 \
	github.com/elastic/go-elasticsearch/v8						 v8.4.0 \
	github.com/emicklei/go-restful							 v2.16.0+incompatible \
	github.com/emicklei/go-restful/v3						 v3.11.0 \
	github.com/envoyproxy/go-control-plane						 v0.12.0 \
	github.com/envoyproxy/protoc-gen-validate					 v1.0.4 \
	github.com/evanphx/json-patch							 v5.6.0+incompatible \
	github.com/farsightsec/golang-framestream					 v0.3.0 \
	github.com/fatih/color								 v1.15.0 \
	github.com/felixge/httpsnoop							 v1.0.4 \
	github.com/flynn/go-docopt							 v0.0.0-20140912013429-f6dd2ebbb31e \
	github.com/flynn/go-shlex							 v0.0.0-20150515145356-3f9db97f8568 \
	github.com/francoispqt/gojay							 v1.2.13 \
	github.com/gabriel-vasile/mimetype						 v1.4.2 \
	github.com/garyburd/redigo							 v1.6.4 \
	github.com/gin-contrib/sse							 v0.1.0 \
	github.com/gin-gonic/gin							 v1.9.1 \
	github.com/globalsign/mgo							 v0.0.0-20181015135952-eeefdecb41b8 \
	github.com/go-chi/chi								 v1.5.4 \
	github.com/go-chi/chi/v5							 v5.0.10 \
	github.com/go-jose/go-jose/v3							 v3.0.1 \
	github.com/go-kit/log								 v0.2.1 \
	github.com/go-logfmt/logfmt							 v0.5.1 \
	github.com/go-logr/logr								 v1.4.1 \
	github.com/go-logr/stdr								 v1.2.2 \
	github.com/go-openapi/jsonpointer						 v0.19.6 \
	github.com/go-openapi/jsonreference						 v0.20.2 \
	github.com/go-openapi/swag							 v0.22.3 \
	github.com/go-pg/pg/v10								 v10.11.1 \
	github.com/go-pg/zerochecker							 v0.2.0 \
	github.com/go-playground/locales						 v0.14.1 \
	github.com/go-playground/universal-translator					 v0.18.1 \
	github.com/go-playground/validator/v10						 v10.15.1 \
	github.com/go-redis/redis							 v6.15.9+incompatible \
	github.com/go-redis/redis/v7							 v7.4.1 \
	github.com/go-redis/redis/v8							 v8.11.5 \
	github.com/go-sql-driver/mysql							 v1.6.0 \
	github.com/go-task/slim-sprig							 v0.0.0-20230315185526-52ccab3ef572 \
	github.com/gobwas/httphead							 v0.1.0 \
	github.com/gobwas/pool								 v0.2.1 \
	github.com/gobwas/ws								 v1.2.1 \
	github.com/goccy/go-json							 v0.10.2 \
	github.com/gocql/gocql								 v0.0.0-20220224095938-0eacd3183625 \
	github.com/godbus/dbus/v5							 v5.0.4 \
	github.com/gofiber/fiber/v2							 v2.50.0 \
	github.com/gofrs/uuid								 v4.4.0+incompatible \
	github.com/gogo/protobuf							 v1.3.2 \
	github.com/golang-jwt/jwt/v4							 v4.5.0 \
	github.com/golang-sql/civil							 v0.0.0-20220223132316-b832511892a9 \
	github.com/golang-sql/sqlexp							 v0.1.0 \
	github.com/golang/glog								 v1.2.0 \
	github.com/golang/groupcache							 v0.0.0-20210331224755-41bb18bfe9da \
	github.com/golang/mock								 v1.6.0 \
	github.com/golang/protobuf							 v1.5.4 \
	github.com/golang/snappy							 v0.0.4 \
	github.com/gomodule/redigo							 v1.8.9 \
	github.com/google/btree								 v1.0.1 \
	github.com/google/gnostic-models						 v0.6.8 \
	github.com/google/go-cmp							 v0.6.0 \
	github.com/google/go-pkcs11							 v0.2.1-0.20230907215043-c6f79328ddf9 \
	github.com/google/gofuzz							 v1.2.0 \
	github.com/google/pprof								 v0.0.0-20230817174616-7a8ec2ada47b \
	github.com/google/s2a-go							 v0.1.7 \
	github.com/google/uuid								 v1.6.0 \
	github.com/googleapis/enterprise-certificate-proxy				 v0.3.2 \
	github.com/googleapis/gax-go/v2							 v2.12.3 \
	github.com/googleapis/gnostic							 v0.5.5 \
	github.com/gorilla/mux								 v1.8.0 \
	github.com/gorilla/websocket							 v1.5.0 \
	github.com/graph-gophers/graphql-go						 v1.5.0 \
	github.com/graphql-go/graphql							 v0.8.1 \
	github.com/graphql-go/handler							 v0.2.3 \
	github.com/gregjones/httpcache							 v0.0.0-20180305231024-9cad4c3443a7 \
	github.com/grpc-ecosystem/go-grpc-prometheus					 v1.2.0 \
	github.com/grpc-ecosystem/grpc-gateway						 v1.16.0 \
	github.com/grpc-ecosystem/grpc-opentracing					 v0.0.0-20180507213350-8e809c8a8645 \
	github.com/hailocab/go-hostpool							 v0.0.0-20160125115350-e80d13ce29ed \
	github.com/hashicorp/consul/api							 v1.24.0 \
	github.com/hashicorp/errwrap							 v1.1.0 \
	github.com/hashicorp/go-cleanhttp						 v0.5.2 \
	github.com/hashicorp/go-hclog							 v1.5.0 \
	github.com/hashicorp/go-immutable-radix						 v1.3.1 \
	github.com/hashicorp/go-multierror						 v1.1.1 \
	github.com/hashicorp/go-retryablehttp						 v0.7.4 \
	github.com/hashicorp/go-rootcerts						 v1.0.2 \
	github.com/hashicorp/go-secure-stdlib/parseutil					 v0.1.7 \
	github.com/hashicorp/go-secure-stdlib/strutil					 v0.1.2 \
	github.com/hashicorp/go-sockaddr						 v1.0.2 \
	github.com/hashicorp/go-uuid							 v1.0.3 \
	github.com/hashicorp/golang-lru							 v1.0.2 \
	github.com/hashicorp/golang-lru/v2						 v2.0.3 \
	github.com/hashicorp/hcl							 v1.0.1-vault-5 \
	github.com/hashicorp/serf							 v0.10.1 \
	github.com/hashicorp/vault/api							 v1.9.2 \
	github.com/hashicorp/vault/sdk							 v0.9.2 \
	github.com/ianlancetaylor/demangle						 v0.0.0-20230524184225-eabc099b10ab \
	github.com/imdario/mergo							 v0.3.12 \
	github.com/infobloxopen/go-trees						 v0.0.0-20200715205103-96a057b8dfb9 \
	github.com/jackc/pgpassfile							 v1.0.0 \
	github.com/jackc/pgservicefile							 v0.0.0-20221227161230-091c0ba34f0a \
	github.com/jackc/pgx/v5								 v5.4.2 \
	github.com/jackc/puddle/v2							 v2.2.0 \
	github.com/jcmturner/aescts/v2							 v2.0.0 \
	github.com/jcmturner/dnsutils/v2						 v2.0.0 \
	github.com/jcmturner/gofork							 v1.7.6 \
	github.com/jcmturner/gokrb5/v8							 v8.4.4 \
	github.com/jcmturner/rpc/v2							 v2.0.3 \
	github.com/jinzhu/gorm								 v1.9.16 \
	github.com/jinzhu/inflection							 v1.0.0 \
	github.com/jinzhu/now								 v1.1.5 \
	github.com/jmespath/go-jmespath							 v0.4.0 \
	github.com/jmespath/go-jmespath/internal/testify				 v1.5.1 \
	github.com/jmoiron/sqlx								 v1.3.5 \
	github.com/josharian/intern							 v1.0.0 \
	github.com/jpillora/backoff							 v1.0.0 \
	github.com/json-iterator/go							 v1.1.12 \
	github.com/julienschmidt/httprouter						 v1.3.0 \
	github.com/kisielk/errcheck							 v1.5.0 \
	github.com/kisielk/gotool							 v1.0.0 \
	github.com/klauspost/compress							 v1.17.1 \
	github.com/klauspost/cpuid/v2							 v2.2.5 \
	github.com/kr/pretty								 v0.3.1 \
	github.com/kr/pty								 v1.1.1 \
	github.com/kr/text								 v0.2.0 \
	github.com/labstack/echo							 v3.3.10+incompatible \
	github.com/labstack/echo/v4							 v4.11.1 \
	github.com/labstack/gommon							 v0.4.0 \
	github.com/leodido/go-urn							 v1.2.4 \
	github.com/lib/pq								 v1.10.2 \
	github.com/mailru/easyjson							 v0.7.7 \
	github.com/mattn/go-colorable							 v0.1.13 \
	github.com/mattn/go-isatty							 v0.0.20 \
	github.com/mattn/go-runewidth							 v0.0.15 \
	github.com/mattn/go-sqlite3							 v1.14.16 \
	github.com/matttproud/golang_protobuf_extensions				 v1.0.4 \
	github.com/microsoft/go-mssqldb							 v0.21.0 \
	github.com/miekg/dns								 v1.1.58 \
	github.com/mitchellh/go-homedir							 v1.1.0 \
	github.com/mitchellh/mapstructure						 v1.5.0 \
	github.com/moby/spdystream							 v0.2.0 \
	github.com/modern-go/concurrent							 v0.0.0-20180306012644-bacd9c7ef1dd \
	github.com/modern-go/reflect2							 v1.0.2 \
	github.com/montanaflynn/stats							 v0.6.6 \
	github.com/munnerz/goautoneg							 v0.0.0-20191010083416-a7dc8b61c822 \
	github.com/mwitkow/go-conntrack							 v0.0.0-20190716064945-2f068394615f \
	github.com/mxk/go-flowrate							 v0.0.0-20140419014527-cca7078d478f \
	github.com/onsi/ginkgo/v2							 v2.13.0 \
	github.com/onsi/gomega								 v1.29.0 \
	github.com/opentracing-contrib/go-observer					 v0.0.0-20170622124052-a52f23424492 \
	github.com/opentracing/opentracing-go						 v1.2.0 \
	github.com/openzipkin-contrib/zipkin-go-opentracing				 v0.5.0 \
	github.com/openzipkin/zipkin-go							 v0.4.2 \
	github.com/oschwald/geoip2-golang						 v1.9.0 \
	github.com/oschwald/maxminddb-golang						 v1.11.0 \
	github.com/outcaste-io/ristretto						 v0.2.3 \
	github.com/pelletier/go-toml/v2							 v2.0.9 \
	github.com/peterbourgon/diskv							 v2.0.1+incompatible \
	github.com/philhofer/fwd							 v1.1.2 \
	github.com/pierrec/lz4/v4							 v4.1.18 \
	github.com/pkg/errors								 v0.9.1 \
	github.com/pmezard/go-difflib							 v1.0.1-0.20181226105442-5d4384ee4fb2 \
	github.com/prometheus/client_golang						 v1.19.0 \
	github.com/prometheus/client_model						 v0.6.0 \
	github.com/prometheus/common							 v0.53.0 \
	github.com/prometheus/procfs							 v0.12.0 \
	github.com/quic-go/qpack							 v0.4.0 \
	github.com/quic-go/quic-go							 v0.42.0 \
	github.com/rabbitmq/amqp091-go							 v1.8.1 \
	github.com/rcrowley/go-metrics							 v0.0.0-20201227073835-cf1acfcdf475 \
	github.com/redis/go-redis/v9							 v9.1.0 \
	github.com/richardartoul/molecule						 v1.0.1-0.20221107223329-32cfee06a052 \
	github.com/rivo/uniseg								 v0.4.4 \
	github.com/rogpeppe/go-internal							 v1.10.0 \
	github.com/ryanuber/go-glob							 v1.0.0 \
	github.com/secure-systems-lab/go-securesystemslib				 v0.7.0 \
	github.com/segmentio/kafka-go							 v0.4.42 \
	github.com/sirupsen/logrus							 v1.9.3 \
	github.com/spaolacci/murmur3							 v1.1.0 \
	github.com/spf13/pflag								 v1.0.5 \
	github.com/stretchr/objx							 v0.5.1 \
	github.com/stretchr/testify							 v1.8.4 \
	github.com/syndtr/goleveldb							 v1.0.1-0.20220721030215-126854af5e6d \
	github.com/tidwall/btree							 v1.6.0 \
	github.com/tidwall/buntdb							 v1.3.0 \
	github.com/tidwall/gjson							 v1.16.0 \
	github.com/tidwall/grect							 v0.1.4 \
	github.com/tidwall/match							 v1.1.1 \
	github.com/tidwall/pretty							 v1.2.1 \
	github.com/tidwall/rtred							 v0.1.2 \
	github.com/tidwall/tinyqueue							 v0.1.1 \
	github.com/tinylib/msgp								 v1.1.8 \
	github.com/tmthrgd/go-hex							 v0.0.0-20190904060850-447a3041c3bc \
	github.com/twitchtv/twirp							 v8.1.3+incompatible \
	github.com/twitchyliquid64/golang-asm						 v0.15.1 \
	github.com/ugorji/go/codec							 v1.2.11 \
	github.com/urfave/negroni							 v1.0.0 \
	github.com/valyala/bytebufferpool						 v1.0.0 \
	github.com/valyala/fasthttp							 v1.50.0 \
	github.com/valyala/fasttemplate							 v1.2.2 \
	github.com/valyala/tcplisten							 v1.0.0 \
	github.com/vektah/gqlparser/v2							 v2.5.8 \
	github.com/vmihailenco/bufpool							 v0.1.11 \
	github.com/vmihailenco/msgpack/v5						 v5.3.5 \
	github.com/vmihailenco/tagparser						 v0.1.2 \
	github.com/vmihailenco/tagparser/v2						 v2.0.0 \
	github.com/xdg-go/pbkdf2							 v1.0.0 \
	github.com/xdg-go/scram								 v1.1.2 \
	github.com/xdg-go/stringprep							 v1.0.4 \
	github.com/xhit/go-str2duration/v2						 v2.1.0 \
	github.com/youmark/pkcs8							 v0.0.0-20181117223130-1be2e3e5546d \
	github.com/yuin/goldmark							 v1.4.13 \
	github.com/zenazn/goji								 v1.0.1 \
	go.etcd.io/etcd/api/v3								 v3.5.12 \
	go.etcd.io/etcd/client/pkg/v3							 v3.5.12 \
	go.etcd.io/etcd/client/v3							 v3.5.12 \
	go.mongodb.org/mongo-driver							 v1.12.1 \
	go.opencensus.io								 v0.24.0 \
	go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc	 v0.49.0 \
	go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp			 v0.49.0 \
	go.opentelemetry.io/otel							 v1.24.0 \
	go.opentelemetry.io/otel/metric							 v1.24.0 \
	go.opentelemetry.io/otel/sdk							 v1.21.0 \
	go.opentelemetry.io/otel/trace							 v1.24.0 \
	go.uber.org/atomic								 v1.11.0 \
	go.uber.org/goleak								 v1.3.0 \
	go.uber.org/mock								 v0.4.0 \
	go.uber.org/multierr								 v1.6.0 \
	go.uber.org/zap									 v1.17.0 \
	golang.org/x/arch								 v0.4.0 \
	golang.org/x/crypto								 v0.22.0 \
	golang.org/x/exp								 v0.0.0-20230321023759-10a507213a29 \
	golang.org/x/lint								 v0.0.0-20190313153728-d0100b6bd8b3 \
	golang.org/x/mod								 v0.14.0 \
	golang.org/x/net								 v0.23.0 \
	golang.org/x/oauth2								 v0.18.0 \
	golang.org/x/sync								 v0.6.0 \
	golang.org/x/sys								 v0.19.0 \
	golang.org/x/term								 v0.19.0 \
	golang.org/x/text								 v0.14.0 \
	golang.org/x/time								 v0.5.0 \
	golang.org/x/tools								 v0.17.0 \
	golang.org/x/xerrors								 v0.0.0-20220907171357-04be3eba64a2 \
	google.golang.org/api								 v0.172.0 \
	google.golang.org/appengine							 v1.6.8 \
	google.golang.org/genproto							 v0.0.0-20240227224415-6ceb2ff114de \
	google.golang.org/genproto/googleapis/api					 v0.0.0-20240311132316-a219d84964c2 \
	google.golang.org/genproto/googleapis/bytestream				 v0.0.0-20240318140521-94a12d6c2237 \
	google.golang.org/genproto/googleapis/rpc					 v0.0.0-20240318140521-94a12d6c2237 \
	google.golang.org/grpc								 v1.63.2 \
	google.golang.org/protobuf							 v1.33.0 \
	gopkg.in/!data!dog/dd-trace-go.v1						 v1.62.0 \
	gopkg.in/check.v1								 v1.0.0-20201130134442-10cb98267c6c \
	gopkg.in/inf.v0									 v0.9.1 \
	gopkg.in/jinzhu/gorm.v1								 v1.9.2 \
	gopkg.in/olivere/elastic.v3							 v3.0.75 \
	gopkg.in/olivere/elastic.v5							 v5.0.84 \
	gopkg.in/yaml.v2								 v2.4.0 \
	gopkg.in/yaml.v3								 v3.0.1 \
	gorm.io/driver/mysql								 v1.0.1 \
	gorm.io/driver/postgres								 v1.4.6 \
	gorm.io/driver/sqlserver							 v1.4.2 \
	gorm.io/gorm									 v1.25.3 \
	honnef.co/go/gotraceui								 v0.2.0 \
	honnef.co/go/tools								 v0.0.0-20190523083050-ea95bdfd59fc \
	k8s.io/api									 v0.29.3 \
	k8s.io/apimachinery								 v0.29.3 \
	k8s.io/client-go								 v0.29.3 \
	k8s.io/gengo									 v0.0.0-20230829151522-9cce18d56c01 \
	k8s.io/klog/v2									 v2.120.1 \
	k8s.io/kube-openapi								 v0.0.0-20231010175941-2dd684a91f00 \
	k8s.io/utils									 v0.0.0-20230726121419-3b25d923346b \
	mellium.im/sasl									 v0.3.1 \
	sigs.k8s.io/json								 v0.0.0-20221116044647-bc3834ca7abd \
	sigs.k8s.io/structured-merge-diff/v4						 v4.4.1 \
	sigs.k8s.io/yaml								 v1.3.0

MODGO_MODFILES =	\
	cloud.google.com/go						 v0.110.7 \
	cloud.google.com/go						 v0.26.0 \
	cloud.google.com/go/compute					 v1.14.0 \
	cloud.google.com/go/compute					 v1.20.1 \
	cloud.google.com/go/compute					 v1.23.0 \
	cloud.google.com/go/compute					 v1.23.4 \
	github.com/!azure/go-autorest/autorest				 v0.11.24 \
	github.com/!azure/go-autorest/autorest/adal			 v0.9.18 \
	github.com/!azure/go-autorest/autorest/mocks			 v0.4.1 \
	github.com/!data!dog/datadog-go/v5				 v5.1.1 \
	github.com/!i!b!m/sarama					 v1.40.0 \
	github.com/!microsoft/go-winio					 v0.5.0 \
	github.com/!microsoft/go-winio					 v0.5.1 \
	github.com/aws/aws-sdk-go					 v1.44.327 \
	github.com/census-instrumentation/opencensus-proto		 v0.2.1 \
	github.com/cespare/xxhash/v2					 v2.1.1 \
	github.com/davecgh/go-spew					 v1.1.0 \
	github.com/davecgh/go-spew					 v1.1.1 \
	github.com/dustin/go-humanize					 v1.0.0 \
	github.com/eapache/go-resiliency				 v1.3.0 \
	github.com/eapache/go-xerial-snappy				 v0.0.0-20230111030713-bf00bc1b83b6 \
	github.com/emicklei/go-restful/v3				 v3.8.0 \
	github.com/envoyproxy/go-control-plane				 v0.9.0 \
	github.com/envoyproxy/go-control-plane				 v0.9.1-0.20191026205805-5f8ba28d4473 \
	github.com/envoyproxy/go-control-plane				 v0.9.4 \
	github.com/envoyproxy/protoc-gen-validate			 v0.1.0 \
	github.com/evanphx/json-patch					 v4.12.0+incompatible \
	github.com/felixge/httpsnoop					 v1.0.3 \
	github.com/go-logr/logr						 v0.2.0 \
	github.com/go-logr/logr						 v1.2.0 \
	github.com/go-logr/logr						 v1.2.2 \
	github.com/go-logr/logr						 v1.2.4 \
	github.com/go-logr/logr						 v1.3.0 \
	github.com/go-openapi/jsonreference				 v0.20.1 \
	github.com/golang-jwt/jwt/v4					 v4.0.0 \
	github.com/golang-jwt/jwt/v4					 v4.2.0 \
	github.com/golang/glog						 v0.0.0-20160126235308-23def4e6c14b \
	github.com/golang/groupcache					 v0.0.0-20200121045136-8c9f03a8e57e \
	github.com/golang/mock						 v1.1.1 \
	github.com/golang/protobuf					 v1.2.0 \
	github.com/golang/protobuf					 v1.3.2 \
	github.com/golang/protobuf					 v1.4.0 \
	github.com/golang/protobuf					 v1.4.0-rc.1 \
	github.com/golang/protobuf					 v1.4.0-rc.1.0.20200221234624-67d41d38c208 \
	github.com/golang/protobuf					 v1.4.0-rc.2 \
	github.com/golang/protobuf					 v1.4.0-rc.4.0.20200313231945-b860323f09d0 \
	github.com/golang/protobuf					 v1.4.1 \
	github.com/golang/protobuf					 v1.4.3 \
	github.com/golang/protobuf					 v1.5.0 \
	github.com/golang/protobuf					 v1.5.2 \
	github.com/golang/protobuf					 v1.5.3 \
	github.com/google/go-cmp					 v0.2.0 \
	github.com/google/go-cmp					 v0.3.0 \
	github.com/google/go-cmp					 v0.3.1 \
	github.com/google/go-cmp					 v0.4.0 \
	github.com/google/go-cmp					 v0.5.0 \
	github.com/google/go-cmp					 v0.5.3 \
	github.com/google/go-cmp					 v0.5.5 \
	github.com/google/go-cmp					 v0.5.8 \
	github.com/google/go-cmp					 v0.5.9 \
	github.com/google/gofuzz					 v1.0.0 \
	github.com/google/gofuzz					 v1.1.0 \
	github.com/google/pprof						 v0.0.0-20210407192527-94a9f03dee38 \
	github.com/google/pprof						 v0.0.0-20210720184732-4bb14d4b1be1 \
	github.com/google/s2a-go					 v0.1.5 \
	github.com/google/uuid						 v1.1.1 \
	github.com/google/uuid						 v1.1.2 \
	github.com/google/uuid						 v1.3.0 \
	github.com/google/uuid						 v1.3.1 \
	github.com/googleapis/enterprise-certificate-proxy		 v0.2.5 \
	github.com/googleapis/gax-go/v2					 v2.11.0 \
	github.com/googleapis/gax-go/v2					 v2.12.0 \
	github.com/hashicorp/errwrap					 v1.0.0 \
	github.com/imdario/mergo					 v0.3.6 \
	github.com/jcmturner/gokrb5/v8					 v8.4.3 \
	github.com/klauspost/compress					 v1.16.6 \
	github.com/kr/pretty						 v0.2.1 \
	github.com/kr/text						 v0.1.0 \
	github.com/matttproud/golang_protobuf_extensions		 v1.0.1 \
	github.com/miekg/dns						 v1.1.31 \
	github.com/miekg/dns						 v1.1.55 \
	github.com/modern-go/concurrent					 v0.0.0-20180228061459-e0a39a4cb421 \
	github.com/munnerz/goautoneg					 v0.0.0-20120707110453-a547fc61f48d \
	github.com/onsi/ginkgo/v2					 v2.1.4 \
	github.com/onsi/ginkgo/v2					 v2.11.0 \
	github.com/onsi/ginkgo/v2					 v2.9.5 \
	github.com/onsi/gomega						 v1.19.0 \
	github.com/onsi/gomega						 v1.27.10 \
	github.com/onsi/gomega						 v1.27.6 \
	github.com/openzipkin/zipkin-go					 v0.4.1 \
	github.com/outcaste-io/ristretto				 v0.2.1 \
	github.com/pierrec/lz4/v4					 v4.1.17 \
	github.com/pkg/errors						 v0.8.1 \
	github.com/pmezard/go-difflib					 v1.0.0 \
	github.com/prometheus/client_golang				 v1.11.1 \
	github.com/prometheus/client_model				 v0.0.0-20190812154241-14fe0d1b01d4 \
	github.com/prometheus/client_model				 v0.2.0 \
	github.com/prometheus/client_model				 v0.5.0 \
	github.com/prometheus/common					 v0.26.0 \
	github.com/prometheus/common					 v0.48.0 \
	github.com/prometheus/procfs					 v0.6.0 \
	github.com/rogpeppe/go-internal					 v1.9.0 \
	github.com/sirupsen/logrus					 v1.7.0 \
	github.com/sirupsen/logrus					 v1.9.0 \
	github.com/stretchr/objx					 v0.1.0 \
	github.com/stretchr/objx					 v0.4.0 \
	github.com/stretchr/objx					 v0.5.0 \
	github.com/stretchr/testify					 v1.2.2 \
	github.com/stretchr/testify					 v1.3.0 \
	github.com/stretchr/testify					 v1.6.1 \
	github.com/stretchr/testify					 v1.7.0 \
	github.com/stretchr/testify					 v1.7.1 \
	github.com/stretchr/testify					 v1.8.0 \
	github.com/stretchr/testify					 v1.8.1 \
	github.com/yuin/goldmark					 v1.1.27 \
	github.com/yuin/goldmark					 v1.2.1 \
	github.com/yuin/goldmark					 v1.3.5 \
	go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp	 v0.44.0 \
	go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp	 v0.47.0 \
	go.opentelemetry.io/otel					 v1.20.0 \
	go.opentelemetry.io/otel					 v1.22.0 \
	go.opentelemetry.io/otel/metric					 v1.20.0 \
	go.opentelemetry.io/otel/metric					 v1.22.0 \
	go.opentelemetry.io/otel/trace					 v1.20.0 \
	go.opentelemetry.io/otel/trace					 v1.22.0 \
	go.uber.org/atomic						 v1.10.0 \
	go.uber.org/atomic						 v1.7.0 \
	go.uber.org/atomic						 v1.9.0 \
	golang.org/x/crypto						 v0.0.0-20190308221718-c2843e01d9a2 \
	golang.org/x/crypto						 v0.0.0-20191011191535-87dc89f01550 \
	golang.org/x/crypto						 v0.0.0-20200622213623-75b288015ac9 \
	golang.org/x/crypto						 v0.0.0-20210921155107-089bfa567519 \
	golang.org/x/crypto						 v0.0.0-20211215153901-e495a2d5b3d3 \
	golang.org/x/crypto						 v0.0.0-20220722155217-630584e8d5aa \
	golang.org/x/crypto						 v0.11.0 \
	golang.org/x/crypto						 v0.12.0 \
	golang.org/x/crypto						 v0.13.0 \
	golang.org/x/crypto						 v0.17.0 \
	golang.org/x/crypto						 v0.18.0 \
	golang.org/x/crypto						 v0.21.0 \
	golang.org/x/crypto						 v0.4.0 \
	golang.org/x/crypto						 v0.6.0 \
	golang.org/x/exp						 v0.0.0-20190121172915-509febef88a4 \
	golang.org/x/exp						 v0.0.0-20221205204356-47842c84f3db \
	golang.org/x/lint						 v0.0.0-20181026193005-c67002cb31c3 \
	golang.org/x/lint						 v0.0.0-20190227174305-5b3e6a55c961 \
	golang.org/x/mod						 v0.1.1-0.20191105210325-c90efee705ee \
	golang.org/x/mod						 v0.11.0 \
	golang.org/x/mod						 v0.12.0 \
	golang.org/x/mod						 v0.2.0 \
	golang.org/x/mod						 v0.3.0 \
	golang.org/x/mod						 v0.4.2 \
	golang.org/x/mod						 v0.6.0 \
	golang.org/x/mod						 v0.6.0-dev.0.20220419223038-86c51ed26bb4 \
	golang.org/x/mod						 v0.7.0 \
	golang.org/x/mod						 v0.8.0 \
	golang.org/x/net						 v0.0.0-20180724234803-3673e40ba225 \
	golang.org/x/net						 v0.0.0-20180826012351-8a410e7b638d \
	golang.org/x/net						 v0.0.0-20190213061140-3a22650c66bd \
	golang.org/x/net						 v0.0.0-20190311183353-d8887717615a \
	golang.org/x/net						 v0.0.0-20190404232315-eb5bcb51f2a3 \
	golang.org/x/net						 v0.0.0-20190620200207-3b0461eec859 \
	golang.org/x/net						 v0.0.0-20190923162816-aa69164e4478 \
	golang.org/x/net						 v0.0.0-20200226121028-0de0cce0169b \
	golang.org/x/net						 v0.0.0-20201021035429-f5854403a974 \
	golang.org/x/net						 v0.0.0-20201110031124-69a78807bb2b \
	golang.org/x/net						 v0.0.0-20210226172049-e18ecbb05110 \
	golang.org/x/net						 v0.0.0-20210405180319-a5a99cb37ef4 \
	golang.org/x/net						 v0.0.0-20211112202133-69e39bad7dc2 \
	golang.org/x/net						 v0.0.0-20220722155237-a158d28d115b \
	golang.org/x/net						 v0.10.0 \
	golang.org/x/net						 v0.12.0 \
	golang.org/x/net						 v0.14.0 \
	golang.org/x/net						 v0.17.0 \
	golang.org/x/net						 v0.19.0 \
	golang.org/x/net						 v0.20.0 \
	golang.org/x/net						 v0.21.0 \
	golang.org/x/net						 v0.22.0 \
	golang.org/x/net						 v0.3.0 \
	golang.org/x/net						 v0.6.0 \
	golang.org/x/net						 v0.7.0 \
	golang.org/x/oauth2						 v0.0.0-20180821212333-d2e6202438be \
	golang.org/x/oauth2						 v0.10.0 \
	golang.org/x/oauth2						 v0.16.0 \
	golang.org/x/oauth2						 v0.17.0 \
	golang.org/x/oauth2						 v0.9.0 \
	golang.org/x/sync						 v0.0.0-20180314180146-1d60e4601c6f \
	golang.org/x/sync						 v0.0.0-20181108010431-42b317875d0f \
	golang.org/x/sync						 v0.0.0-20181221193216-37e7f081c4d4 \
	golang.org/x/sync						 v0.0.0-20190423024810-112230192c58 \
	golang.org/x/sync						 v0.0.0-20190911185100-cd5d95a43a6e \
	golang.org/x/sync						 v0.0.0-20201020160332-67f06af15bc9 \
	golang.org/x/sync						 v0.0.0-20210220032951-036812b2e83c \
	golang.org/x/sync						 v0.0.0-20220722155255-886fb9371eb4 \
	golang.org/x/sync						 v0.1.0 \
	golang.org/x/sync						 v0.2.0 \
	golang.org/x/sync						 v0.3.0 \
	golang.org/x/sys						 v0.0.0-20180830151530-49385e6e1522 \
	golang.org/x/sys						 v0.0.0-20190215142949-d0b11bdaac8a \
	golang.org/x/sys						 v0.0.0-20190412213103-97732733099d \
	golang.org/x/sys						 v0.0.0-20190924154521-2837fb4f24fe \
	golang.org/x/sys						 v0.0.0-20191026070338-33540a1f6037 \
	golang.org/x/sys						 v0.0.0-20200930185726-fdedc70b468f \
	golang.org/x/sys						 v0.0.0-20201119102817-f84b799fce68 \
	golang.org/x/sys						 v0.0.0-20210124154548-22da62e12c0c \
	golang.org/x/sys						 v0.0.0-20210330210617-4fbd30eecc44 \
	golang.org/x/sys						 v0.0.0-20210403161142-5e06dd20ab57 \
	golang.org/x/sys						 v0.0.0-20210423082822-04245dca01da \
	golang.org/x/sys						 v0.0.0-20210510120138-977fb7262007 \
	golang.org/x/sys						 v0.0.0-20210615035016-665e8c7367d1 \
	golang.org/x/sys						 v0.0.0-20220520151302-bc2c85ada10a \
	golang.org/x/sys						 v0.0.0-20220627191245-f75cf1eec38b \
	golang.org/x/sys						 v0.0.0-20220722155257-8c9f86f7a55f \
	golang.org/x/sys						 v0.1.0 \
	golang.org/x/sys						 v0.10.0 \
	golang.org/x/sys						 v0.11.0 \
	golang.org/x/sys						 v0.12.0 \
	golang.org/x/sys						 v0.13.0 \
	golang.org/x/sys						 v0.15.0 \
	golang.org/x/sys						 v0.16.0 \
	golang.org/x/sys						 v0.17.0 \
	golang.org/x/sys						 v0.18.0 \
	golang.org/x/sys						 v0.3.0 \
	golang.org/x/sys						 v0.5.0 \
	golang.org/x/sys						 v0.6.0 \
	golang.org/x/sys						 v0.7.0 \
	golang.org/x/sys						 v0.8.0 \
	golang.org/x/sys						 v0.9.0 \
	golang.org/x/term						 v0.0.0-20201126162022-7de9c90e9dd1 \
	golang.org/x/term						 v0.0.0-20210927222741-03fcf44c2211 \
	golang.org/x/term						 v0.10.0 \
	golang.org/x/term						 v0.15.0 \
	golang.org/x/term						 v0.18.0 \
	golang.org/x/term						 v0.3.0 \
	golang.org/x/term						 v0.5.0 \
	golang.org/x/text						 v0.11.0 \
	golang.org/x/text						 v0.12.0 \
	golang.org/x/text						 v0.13.0 \
	golang.org/x/text						 v0.3.0 \
	golang.org/x/text						 v0.3.3 \
	golang.org/x/text						 v0.3.6 \
	golang.org/x/text						 v0.3.7 \
	golang.org/x/text						 v0.3.8 \
	golang.org/x/text						 v0.5.0 \
	golang.org/x/text						 v0.7.0 \
	golang.org/x/text						 v0.9.0 \
	golang.org/x/time						 v0.3.0 \
	golang.org/x/tools						 v0.0.0-20180917221912-90fa682c2a6e \
	golang.org/x/tools						 v0.0.0-20190114222345-bf090417da8b \
	golang.org/x/tools						 v0.0.0-20190226205152-f727befe758c \
	golang.org/x/tools						 v0.0.0-20190311212946-11955173bddd \
	golang.org/x/tools						 v0.0.0-20190524140312-2c0ae7006135 \
	golang.org/x/tools						 v0.0.0-20191119224855-298f0cb1881e \
	golang.org/x/tools						 v0.0.0-20191216052735-49a3e744a425 \
	golang.org/x/tools						 v0.0.0-20200619180055-7c47624df98f \
	golang.org/x/tools						 v0.0.0-20210106214847-113979e3529a \
	golang.org/x/tools						 v0.1.1 \
	golang.org/x/tools						 v0.1.12 \
	golang.org/x/tools						 v0.12.0 \
	golang.org/x/tools						 v0.12.1-0.20230815132531-74c255bcf846 \
	golang.org/x/tools						 v0.13.0 \
	golang.org/x/tools						 v0.16.1 \
	golang.org/x/tools						 v0.2.0 \
	golang.org/x/tools						 v0.4.0 \
	golang.org/x/tools						 v0.6.0 \
	golang.org/x/tools						 v0.9.1 \
	golang.org/x/tools						 v0.9.3 \
	golang.org/x/xerrors						 v0.0.0-20190717185122-a985d3407aa7 \
	golang.org/x/xerrors						 v0.0.0-20191011141410-1b5146add898 \
	golang.org/x/xerrors						 v0.0.0-20191204190536-9bdfabe68543 \
	golang.org/x/xerrors						 v0.0.0-20200804184101-5ec99f83aff1 \
	google.golang.org/api						 v0.128.0 \
	google.golang.org/api						 v0.162.0 \
	google.golang.org/api						 v0.169.0 \
	google.golang.org/appengine					 v1.1.0 \
	google.golang.org/appengine					 v1.4.0 \
	google.golang.org/appengine					 v1.6.7 \
	google.golang.org/genproto					 v0.0.0-20180817151627-c66870c02cf8 \
	google.golang.org/genproto					 v0.0.0-20190819201941-24fa4b261c55 \
	google.golang.org/genproto					 v0.0.0-20200526211855-cb27e3aa2013 \
	google.golang.org/genproto					 v0.0.0-20230530153820-e85fd2cbaebc \
	google.golang.org/genproto					 v0.0.0-20230822172742-b8732ec3820d \
	google.golang.org/genproto					 v0.0.0-20240125205218-1f4bbc51befe \
	google.golang.org/genproto/googleapis/api			 v0.0.0-20230530153820-e85fd2cbaebc \
	google.golang.org/genproto/googleapis/api			 v0.0.0-20230822172742-b8732ec3820d \
	google.golang.org/genproto/googleapis/api			 v0.0.0-20240205150955-31a09d347014 \
	google.golang.org/genproto/googleapis/api			 v0.0.0-20240227224415-6ceb2ff114de \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20230525234030-28d5490b6b19 \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20230530153820-e85fd2cbaebc \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20230822172742-b8732ec3820d \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20240125205218-1f4bbc51befe \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20240227224415-6ceb2ff114de \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20240228224816-df926f6c8641 \
	google.golang.org/genproto/googleapis/rpc			 v0.0.0-20240311132316-a219d84964c2 \
	google.golang.org/grpc						 v1.19.0 \
	google.golang.org/grpc						 v1.23.0 \
	google.golang.org/grpc						 v1.25.1 \
	google.golang.org/grpc						 v1.27.0 \
	google.golang.org/grpc						 v1.33.2 \
	google.golang.org/grpc						 v1.50.0 \
	google.golang.org/grpc						 v1.57.0 \
	google.golang.org/grpc						 v1.57.1 \
	google.golang.org/grpc						 v1.59.0 \
	google.golang.org/grpc						 v1.61.0 \
	google.golang.org/grpc						 v1.62.0 \
	google.golang.org/grpc						 v1.62.1 \
	google.golang.org/protobuf					 v0.0.0-20200109180630-ec00e32a8dfd \
	google.golang.org/protobuf					 v0.0.0-20200221191635-4d8936d0db64 \
	google.golang.org/protobuf					 v0.0.0-20200228230310-ab0ca4ff8a60 \
	google.golang.org/protobuf					 v1.20.1-0.20200309200217-e05f789c0967 \
	google.golang.org/protobuf					 v1.21.0 \
	google.golang.org/protobuf					 v1.22.0 \
	google.golang.org/protobuf					 v1.23.0 \
	google.golang.org/protobuf					 v1.23.1-0.20200526195155-81db48ad09cc \
	google.golang.org/protobuf					 v1.25.0 \
	google.golang.org/protobuf					 v1.26.0 \
	google.golang.org/protobuf					 v1.26.0-rc.1 \
	google.golang.org/protobuf					 v1.27.1 \
	google.golang.org/protobuf					 v1.28.0 \
	google.golang.org/protobuf					 v1.30.0 \
	google.golang.org/protobuf					 v1.31.0 \
	google.golang.org/protobuf					 v1.32.0 \
	gopkg.in/check.v1						 v0.0.0-20161208181325-20d25e280405 \
	gopkg.in/check.v1						 v1.0.0-20180628173108-788fd7840127 \
	gopkg.in/yaml.v2						 v2.2.8 \
	gopkg.in/yaml.v2						 v2.3.0 \
	gopkg.in/yaml.v3						 v3.0.0-20200313102051-9f266ea9e77c \
	gopkg.in/yaml.v3						 v3.0.0-20210107192922-496545a6307b \
	honnef.co/go/tools						 v0.0.0-20190102054323-c2f93a96b099 \
	k8s.io/api							 v0.23.17 \
	k8s.io/apimachinery						 v0.23.17 \
	k8s.io/client-go						 v0.23.17 \
	k8s.io/klog/v2							 v2.110.1 \
	k8s.io/klog/v2							 v2.2.0 \
	k8s.io/klog/v2							 v2.30.0 \
	k8s.io/klog/v2							 v2.80.1 \
	k8s.io/kube-openapi						 v0.0.0-20211115234752-e816edb12b65 \
	k8s.io/utils							 v0.0.0-20210802155522-efc7438f0176 \
	k8s.io/utils							 v0.0.0-20211116205334-6203023598ed \
	sigs.k8s.io/json						 v0.0.0-20211020170558-c049b76a60c6 \
	sigs.k8s.io/structured-merge-diff/v4				 v4.2.3 \
	sigs.k8s.io/yaml						 v1.2.0
