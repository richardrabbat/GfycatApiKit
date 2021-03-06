Pod::Spec.new do |s|

  s.name                = 'GfycatApiKit'
  s.version             = '0.0.1'
  s.summary             = 'GfycatApiKit for iOS'
  s.description         = 'GfycatApiKit provides convenient way to communicate with the Gfycat API.'
  s.homepage            = 'https://developers.gfycat.com/api/'
  s.license             = { :type => 'Commercial', :file => 'LICENSE' }
  s.author              = { 'Gfycat' => 'support@gfycat.com' }
  s.source              = { :git => 'https://github.com/gfycat/GfycatApiKit.git', :tag => s.version.to_s }
  s.social_media_url    = 'https://twitter.com/gfycat'

  s.platform            = :ios, '8.0'
  s.requires_arc        = true
  s.source_files        = 'GfycatApiKit/**/*'
  s.public_header_files = 'GfycatApiKit/**/*.h'

  s.dependency 'AFNetworking', '~> 3.0'
  s.dependency 'UICKeyChainStore'

end
