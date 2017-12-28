INFORMATION_OBJECT = {'Class': {'extensibility-implied': False,
           'imports': {},
           'object-classes': {'ERROR-CLASS': {'members': [{'name': '&category',
                                                           'optional': False,
                                                           'type': 'PrintableString'},
                                                          {'name': '&code',
                                                           'optional': False,
                                                           'type': 'INTEGER'},
                                                          {'name': '&Type',
                                                           'optional': False,
                                                           'type': 'OpenType'}]},
                              'INNER-ITEM': {'members': [{'name': '&type',
                                                          'optional': False,
                                                          'type': 'INTEGER'},
                                                         {'name': '&Value',
                                                          'optional': False,
                                                          'type': 'OpenType'}]},
                              'ITEM': {'members': [{'name': '&id',
                                                    'optional': False,
                                                    'type': 'INTEGER'},
                                                   {'name': '&Value',
                                                    'optional': False,
                                                    'type': 'OpenType'},
                                                   {'name': '&comment',
                                                    'optional': False,
                                                    'type': 'IA5String'}]}},
           'object-sets': {'ErrorSet': {'class': 'ERROR-CLASS',
                                        'members': [{'&Type': 'INTEGER',
                                                     '&category': 'A',
                                                     '&code': 1},
                                                    {'&Type': 'BOOLEAN',
                                                     '&category': 'A',
                                                     '&code': 2},
                                                    {'&Type': 'IA5String',
                                                     '&category': 'B',
                                                     '&code': 1},
                                                    {'&Type': 'GeneralString',
                                                     '&category': 'B',
                                                     '&code': 2}]},
                           'InnerItems': {'class': 'INNER-ITEM',
                                          'members': ['innerItem0',
                                                      {'&Value': 'IA5String',
                                                       '&type': 1}]},
                           'Items': {'class': 'ITEM',
                                     'members': [{'&Value': 'BOOLEAN',
                                                  '&comment': 'item 0',
                                                  '&id': 0},
                                                 {'&Value': 'InnerSequence',
                                                  '&comment': 'item 1',
                                                  '&id': 1}]}},
           'tags': 'AUTOMATIC',
           'types': {'ErrorReturn': {'members': [{'name': 'errorCategory',
                                                  'optional': False,
                                                  'type': 'ERROR-CLASS.&category'},
                                                 {'element': {'members': [{'name': 'errorCode',
                                                                           'optional': False,
                                                                           'type': 'ERROR-CLASS.&code'},
                                                                          {'name': 'errorInfo',
                                                                           'optional': False,
                                                                           'type': 'ERROR-CLASS.&Type'}],
                                                              'type': 'SEQUENCE'},
                                                  'name': 'errors',
                                                  'optional': False,
                                                  'size': None,
                                                  'type': 'SEQUENCE OF'}],
                                     'type': 'SEQUENCE'},
                     'InnerSequence': {'members': [{'name': 'myValue',
                                                    'optional': False,
                                                    'type': 'INNER-ITEM.&Value'},
                                                   {'name': 'myType',
                                                    'optional': False,
                                                    'type': 'INNER-ITEM.&type'}],
                                       'type': 'SEQUENCE'},
                     'ItemWithConstraints': {'members': [{'name': 'id',
                                                          'optional': False,
                                                          'type': 'ITEM.&id'},
                                                         {'name': 'value',
                                                          'optional': False,
                                                          'type': 'ITEM.&Value'},
                                                         {'name': 'comment',
                                                          'optional': False,
                                                          'type': 'ITEM.&comment'},
                                                         {'name': 'extra',
                                                          'optional': False,
                                                          'type': 'INTEGER'}],
                                             'type': 'SEQUENCE'},
                     'ItemWithoutConstraints': {'members': [{'name': 'id',
                                                             'optional': False,
                                                             'type': 'ITEM.&id'},
                                                            {'name': 'value',
                                                             'optional': False,
                                                             'type': 'ITEM.&Value'},
                                                            {'name': 'comment',
                                                             'optional': False,
                                                             'type': 'ITEM.&comment'},
                                                            {'name': 'extra',
                                                             'optional': False,
                                                             'type': 'INTEGER'}],
                                                'type': 'SEQUENCE'}},
           'values': {'innerItem0': {'type': 'I',
                                     'value': [['&type', ['0']],
                                               ['&Value', 'INTEGER', []]]}}}}

