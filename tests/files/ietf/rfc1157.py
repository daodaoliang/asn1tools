RFC1157 = {'RFC1157-SNMP': {'extensibility-implied': False,
                  'imports': {'RFC1155-SMI': ['ObjectName',
                                              'ObjectSyntax',
                                              'NetworkAddress',
                                              'IpAddress',
                                              'TimeTicks']},
                  'object-classes': {},
                  'object-sets': {},
                  'types': {'GetNextRequest-PDU': {'tag': {'kind': 'IMPLICIT',
                                                           'number': 1},
                                                   'type': 'PDU'},
                            'GetRequest-PDU': {'tag': {'kind': 'IMPLICIT',
                                                       'number': 0},
                                               'type': 'PDU'},
                            'GetResponse-PDU': {'tag': {'kind': 'IMPLICIT',
                                                        'number': 2},
                                                'type': 'PDU'},
                            'Message': {'members': [{'name': 'version',
                                                     'optional': False,
                                                     'type': 'INTEGER'},
                                                    {'name': 'community',
                                                     'optional': False,
                                                     'size': None,
                                                     'type': 'OCTET STRING'},
                                                    {'name': 'data',
                                                     'optional': False,
                                                     'type': 'PDUs'}],
                                        'type': 'SEQUENCE'},
                            'PDU': {'members': [{'name': 'request-id',
                                                 'optional': False,
                                                 'type': 'INTEGER'},
                                                {'name': 'error-status',
                                                 'optional': False,
                                                 'type': 'INTEGER'},
                                                {'name': 'error-index',
                                                 'optional': False,
                                                 'type': 'INTEGER'},
                                                {'name': 'variable-bindings',
                                                 'optional': False,
                                                 'type': 'VarBindList'}],
                                    'type': 'SEQUENCE'},
                            'PDUs': {'members': [{'name': 'get-request',
                                                  'optional': False,
                                                  'type': 'GetRequest-PDU'},
                                                 {'name': 'get-next-request',
                                                  'optional': False,
                                                  'type': 'GetNextRequest-PDU'},
                                                 {'name': 'get-response',
                                                  'optional': False,
                                                  'type': 'GetResponse-PDU'},
                                                 {'name': 'set-request',
                                                  'optional': False,
                                                  'type': 'SetRequest-PDU'},
                                                 {'name': 'trap',
                                                  'optional': False,
                                                  'type': 'Trap-PDU'}],
                                     'type': 'CHOICE'},
                            'SetRequest-PDU': {'tag': {'kind': 'IMPLICIT',
                                                       'number': 3},
                                               'type': 'PDU'},
                            'Trap-PDU': {'members': [{'name': 'enterprise',
                                                      'optional': False,
                                                      'type': 'OBJECT '
                                                              'IDENTIFIER'},
                                                     {'name': 'agent-addr',
                                                      'optional': False,
                                                      'type': 'NetworkAddress'},
                                                     {'name': 'generic-trap',
                                                      'optional': False,
                                                      'type': 'INTEGER'},
                                                     {'name': 'specific-trap',
                                                      'optional': False,
                                                      'type': 'INTEGER'},
                                                     {'name': 'time-stamp',
                                                      'optional': False,
                                                      'type': 'TimeTicks'},
                                                     {'name': 'variable-bindings',
                                                      'optional': False,
                                                      'type': 'VarBindList'}],
                                         'tag': {'kind': 'IMPLICIT',
                                                 'number': 4},
                                         'type': 'SEQUENCE'},
                            'VarBind': {'members': [{'name': 'name',
                                                     'optional': False,
                                                     'type': 'ObjectName'},
                                                    {'name': 'value',
                                                     'optional': False,
                                                     'type': 'ObjectSyntax'}],
                                        'type': 'SEQUENCE'},
                            'VarBindList': {'element': {'type': 'VarBind'},
                                            'size': None,
                                            'type': 'SEQUENCE OF'}},
                  'values': {}}}