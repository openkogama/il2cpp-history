
/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] GetCurrentNodeSchemaType() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
JsonValidatingReader_GetCurrentNodeSchemaType(JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  bVar2 = 0;
  if (pJVar1 != (JsonReader *)0x0) {
    uVar3 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
    switch(uVar3) {
    case 1:
      value = 0x10;
      break;
    case 2:
      value = 0x20;
      break;
    default:
      NVar4.hasValue = 0;
      uVar5._1_3_ = 0;
      register0x00000008 = 0;
      return NVar4;
    case 7:
      value = 4;
      break;
    case 8:
      value = 2;
      break;
    case 9:
      value = 1;
      break;
    case 10:
      value = 8;
      break;
    case 0xb:
      value = 0x40;
    }
    NStack_6.hasValue = 0;
    NStack_6._1_3_ = 0;
    NStack_6.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_6,value,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NVar7.hasValue = NStack_6.hasValue;
    uVar8._1_3_ = NStack_6._1_3_;
    register0x00000008 = NStack_6.value;
    return NVar7;
  }
  uVar9 = func_?();
  iVar10 = (int)uVar9 + -1;
  bVar11 = (byte)iVar10;
  bVar12 = (byte)((uint)iVar10 >> 8);
  bVar13 = bVar12 + bVar11;
  bVar14 = CARRY1(bVar12,bVar11) || CARRY1(bVar13,bVar2);
  iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(bVar13 + bVar2,bVar11)) + -1;
  bVar12 = (byte)iVar10;
  bVar2 = (byte)((uint)iVar10 >> 8);
  bVar13 = bVar2 + bVar12;
  bVar15 = CARRY1(bVar2,bVar12) || CARRY1(bVar13,bVar14);
  pbVar16 = (byte *)((int)((ulonglong)uVar9 >> 0x20) + -0x63efb742);
  bVar2 = *pbVar16;
  bVar17 = (byte)((ulonglong)uVar9 >> 0x20);
  bVar11 = *pbVar16 + bVar17;
  *pbVar16 = bVar11 + bVar15;
  pcVar18 = (char *)(CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(bVar13 + bVar14,bVar12)) +
                   -0x45efb744);
  *pcVar18 = *pcVar18 + (char)((ulonglong)uVar9 >> 0x28) +
            (CARRY1(bVar2,bVar17) || CARRY1(bVar11,bVar15));
  pcVar19 = (code *)swi(3);
  NVar4 = (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)(*pcVar19)();
  return NVar4;
}


/* Boolean IsPropertyDefinied(JsonSchemaModel, String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_IsPropertyDefinied
               (JsonValidatingReader *this,JsonSchemaModel *schema,String *propertyName,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<System::String>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<System::String>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    cRam_? = '\x01';
  }
  if (schema != (JsonSchemaModel *)0x0) {
    if ((schema->fields)._Properties_k__BackingField !=
        (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      pIVar4 = (schema->fields)._Properties_k__BackingField;
      uVar5 = 0;
      uVar6 = (pIVar4->klass->_1).interface_offsets_count;
      if (uVar6 != 0) {
        do {
          if (pIVar4->klass->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
             ) {
            pVVar7 = &(pIVar4->klass->vtable).ContainsKey +
                     pIVar4->klass->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pVVar7 = (VirtualInvokeData *)
               func_?(pIVar4,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                               ,4);
code_?:
      cVar8 = (*pVVar7->methodPtr)(pIVar4,propertyName,pVVar7->method);
      if (cVar8 != '\0') {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    if ((schema->fields)._PatternProperties_k__BackingField ==
        (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    iVar9 = func_?(2,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                            ,(schema->fields)._PatternProperties_k__BackingField);
    if (iVar9 != 0) {
      iVar9 = func_?(0,TypeInfo__System__Collections__Generic__IEnumerable<System::String>,
                              iVar9);
      uStack_1 = 1;
      while (iVar9 != 0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar9);
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          if (iVar9 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar9);
          }
          goto code_?;
        }
        if (iVar9 == 0) break;
        pattern = (String *)
                  func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerator<System::String>
                                  ,iVar9);
        if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__System__Text__RegularExpressions__Regex);
        }
        bVar10 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                          (propertyName,pattern,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean IsZero(Double) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_IsZero
               (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  return (double)CONCAT44((uint)((ulonglong)value >> 0x20) & _UNK_?,
                          SUB84(value,0) & _UNK_?) < _UNK_?;
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo
               (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 != 0) {
    bVar2 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
    return bVar2;
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
        JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber
                  (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 != 0) {
    iVar2 = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
    return iVar2;
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
        JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                  (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 != 0) {
    iVar2 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
    return iVar2;
  }
  return 0;
}


/* Void OnValidationEvent(JsonSchemaException) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_OnValidationEvent
               (JsonValidatingReader *this,JsonSchemaException *exception,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).ValidationEventHandler;
  if (pVVar1 != (ValidationEventHandler *)0x0) {
    this_00 = (ValidationEventArgs *)
              func_?(TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs);
    if (this_00 != (ValidationEventArgs *)0x0) {
      Schema::ValidationEventArgs::ValidationEventArgs__ctor(this_00,exception,(MethodInfo *)0x0);
      (*(pVVar1->fields)._._.invoke_impl)
                ((pVVar1->fields)._._.method_code,this,this_00,(pVVar1->fields)._._.method);
      return;
    }
    func_?();
  }
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__JsonValidatingReader__OnValidationEvent_Newtonsoft__Json__Schema__JsonSchemaException_
                         );
  func_?(exception,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JsonValidatingReader+SchemaScope Pop() */

JsonValidatingReader_SchemaScope *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Pop
          (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Peek__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Pop__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._stack;
  if (pSVar1 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
    pJVar2 = (JsonValidatingReader_SchemaScope *)
             mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
             Stack_1_System_Object__Pop
                       ((Stack_1_System_Object_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Pop__
                       );
    pSVar1 = (this->fields)._stack;
    if (pSVar1 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        pJVar3 = (JsonValidatingReader_SchemaScope *)0x0;
      }
      else {
        pJVar3 = (JsonValidatingReader_SchemaScope *)
                 mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                 Stack_1_System_Object__Peek
                           ((Stack_1_System_Object_ *)pSVar1,
                            MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Peek__
                           );
      }
      (this->fields)._currentScope = pJVar3;
      func_?(&(this->fields)._currentScope,pJVar3);
      return pJVar2;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar2 = (JsonValidatingReader_SchemaScope *)(*pcVar4)();
  return pJVar2;
}


/* Void ProcessValue() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ProcessValue
               (JsonValidatingReader *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc0;
  puVar5 = &stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Index__0__has_not_been_defined_a);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (((this->fields)._currentScope == (JsonValidatingReader_SchemaScope *)0x0) ||
     (pJVar6 = (this->fields)._currentScope, (pJVar6->fields)._tokenType != 2)) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  piVar7 = &(pJVar6->fields)._ArrayItemCount_k__BackingField;
  *piVar7 = *piVar7 + 1;
  pJVar6 = (this->fields)._currentScope;
  if ((pJVar6 != (JsonValidatingReader_SchemaScope *)0x0) &&
     (pIVar8 = (pJVar6->fields)._schemas,
     pIVar8 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
    pSStack_9 = (String *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,pIVar8);
    uStack_1 = 1;
code_?:
    if (pSStack_9 != (String *)0x0) {
      cVar10 = func_?(0,TypeInfo__System__Collections__IEnumerator,pSStack_9);
      pSVar11 = pSStack_9;
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        if (pSStack_9 != (String *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pSStack_9);
        }
        goto code_?;
      }
      pSStack_12 = pSStack_9;
      if (pSStack_9 == (String *)0x0) goto code_?;
      pSStack_13 = pSStack_9->klass;
      uVar14 = 0;
      uStack_15 = 0;
      uVar16 = (pSStack_13->_1).interface_offsets_count;
      if (uVar16 != 0) {
        do {
          if (pSStack_13->interfaceOffsets[uVar14].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
             ) {
            pVVar17 = &(pSStack_9->klass->vtable).Equals +
                     pSStack_9->klass->interfaceOffsets[uVar14].offset;
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar16);
      }
      pVVar17 = (VirtualInvokeData *)
               func_?(pSStack_9,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                               ,0);
code_?:
      schema = (JsonSchemaModel *)(*pVVar17->methodPtr)(pSVar11,pVVar17->method);
      if (((schema != (JsonSchemaModel *)0x0) &&
          ((schema->fields)._Items_k__BackingField !=
           (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) &&
         (iVar18 = func_?(0,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,(schema->fields)._Items_k__BackingField), 1 < iVar18)) {
        pJVar6 = (this->fields)._currentScope;
        if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) goto code_?;
        iVar18 = (pJVar6->fields)._ArrayItemCount_k__BackingField;
        pIVar8 = (schema->fields)._Items_k__BackingField;
        if (pIVar8 == (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) goto code_?;
        iVar19 = func_?(0,
                                 TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,pIVar8);
        if (iVar19 <= iVar18) {
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pSStack_13 = (String__Class *)
                       mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          args = (Object__Array *)func_?(TypeInfo__System__Object);
          pJVar6 = (this->fields)._currentScope;
          if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) goto code_?;
          iStack_20 = (pJVar6->fields)._ArrayItemCount_k__BackingField;
          pSStack_12 = (String *)func_?(TypeInfo__System__Int32,&iStack_20);
          if (args == (Object__Array *)0x0) goto code_?;
          if ((pSStack_12 == (String *)0x0) ||
             (iVar18 = func_?(pSStack_12,(args->klass->_0).element_class), iVar18 != 0)) {
            func_?(0,pSStack_12);
            pSStack_12 = StringLiteral_Index__0__has_not_been_defined_a;
            pSVar11 = StringLiteral_Index__0__has_not_been_defined_a;
            if (cRam_? == '\0') {
              func_?(&StringLiteral_format);
              cRam_? = '\x01';
              pSVar11 = pSStack_12;
            }
            pSStack_12 = StringLiteral_format;
            if (pSVar11 != (String *)0x0) {
              pSVar11 = mscorlib.dll::System::String::String_Format_7
                                  ((IFormatProvider *)pSStack_13,pSVar11,args,(MethodInfo *)0x0);
              JsonValidatingReader_RaiseError(this,pSVar11,schema,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            uVar21 = func_?();
            func_?(uVar21,0);
          }
          uVar21 = func_?(&TypeInfo__System__ArgumentNullException);
          this_00 = (ArgumentNullException *)func_?(uVar21);
          func_?(this_00);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_00,pSStack_12,(MethodInfo *)0x0);
          uVar21 = func_?(&
                                   MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                                  );
          func_?(this_00,uVar21);
          goto code_?;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Push(JsonValidatingReader+SchemaScope) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Push
               (JsonValidatingReader *this,JsonValidatingReader_SchemaScope *scope,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Push_Newtonsoft__Json__JsonValidatingReader__SchemaScope_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object__Push
              ((Stack_1_System_Object_ *)this_00,(Object *)scope,
               MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Push_Newtonsoft__Json__JsonValidatingReader__SchemaScope_
              );
    (this->fields)._currentScope = scope;
    func_?(&(this->fields)._currentScope,scope);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RaiseError(String, JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_RaiseError
               (JsonValidatingReader *this,String *message,JsonSchemaModel *schema,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaException);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__Line__0___position__1__);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  if (this != (JsonValidatingReader *)0x0) {
    cVar2 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
    pSVar3 = message;
    if (cVar2 == '\0') {
code_?:
      lineNumber = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
      linePosition = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
      unaff_EBX = (JsonSchemaException *)
                  func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaException);
      if (unaff_EBX != (JsonSchemaException *)0x0) {
        Schema::JsonSchemaException::JsonSchemaException__ctor_4
                  (unaff_EBX,pSVar3,(Exception *)0x0,lineNumber,linePosition,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          pVStack_4 = (ValidationEventArgs__Class *)
                      &TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs;
          func_?();
          cRam_? = '\x01';
        }
        pVVar5 = (pJVar1->fields).ValidationEventHandler;
        if (pVVar5 == (ValidationEventHandler *)0x0) goto code_?;
        pVStack_4 = TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs;
        this = (JsonValidatingReader *)func_?();
        if (this != (JsonValidatingReader *)0x0) {
          Schema::ValidationEventArgs::ValidationEventArgs__ctor
                    ((ValidationEventArgs *)this,unaff_EBX,(MethodInfo *)0x0);
          (*(pVVar5->fields)._._.invoke_impl)
                    ((pVVar5->fields)._._.method_code,pJVar1,this,(pVVar5->fields)._._.method);
          return;
        }
      }
    }
    else {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      args = (Object__Array *)func_?(TypeInfo__System__Object,2);
      this = (JsonValidatingReader *)
             func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
      unaff_EBX = (JsonSchemaException *)func_?(TypeInfo__System__Int32,&this);
      if (args != (Object__Array *)0x0) {
        if ((unaff_EBX == (JsonSchemaException *)0x0) ||
           (iVar6 = func_?(unaff_EBX,(args->klass->_0).element_class), iVar6 != 0)) {
          if (args->max_length != 0) {
            args->vector[0] = (Object *)unaff_EBX;
            func_?(args->vector,unaff_EBX);
            pVStack_4 = (ValidationEventArgs__Class *)
                        func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
            unaff_EBX = (JsonSchemaException *)func_?(TypeInfo__System__Int32,&pVStack_4);
            if ((unaff_EBX != (JsonSchemaException *)0x0) &&
               (iVar6 = func_?(unaff_EBX,(args->klass->_0).element_class), iVar6 == 0))
            goto code_?;
            if (args->max_length < 2) goto code_?;
            args->vector[1] = (Object *)unaff_EBX;
            func_?(args->vector + 1,unaff_EBX);
            pSVar3 = StringLiteral__Line__0___position__1__;
            if (cRam_? == '\0') {
              func_?(&StringLiteral_format);
              cRam_? = '\x01';
            }
            pSStack_7 = StringLiteral_format;
            unaff_EBX = (JsonSchemaException *)0x0;
            if (pSVar3 != (String *)0x0) {
              pSVar3 = mscorlib.dll::System::String::String_Format_7
                                 ((IFormatProvider *)provider,pSVar3,args,(MethodInfo *)0x0);
              pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                 (message,pSVar3,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
        }
        else {
          uVar8 = func_?(0);
          func_?(uVar8);
code_?:
          uVar8 = func_?(0);
          func_?(uVar8);
code_?:
          uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
          this_00 = (ArgumentNullException *)func_?(uVar8);
          func_?(this_00);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_00,pSStack_7,(MethodInfo *)0x0);
          uVar8 = func_?(&
                                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                                 );
          func_?(this_00,uVar8);
        }
code_?:
        func_?();
      }
    }
  }
  func_?();
code_?:
  pVStack_4 = (ValidationEventArgs__Class *)
              &
              MethodInfo__Newtonsoft__Json__JsonValidatingReader__OnValidationEvent_Newtonsoft__Json__Schema__JsonSchemaException_
  ;
  pVStack_4 = (ValidationEventArgs__Class *)func_?();
  func_?(unaff_EBX);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Read
               (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    cVar2 = (*(pJVar1->klass->vtable).__unknown.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).__unknown.method);
    if (cVar2 == '\0') {
      return 0;
    }
    pJVar1 = (this->fields)._reader;
    if (pJVar1 != (JsonReader *)0x0) {
      iVar3 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
      if (iVar3 != 5) {
        JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
      }
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ReadAsBytes
          (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    pBVar2 = (Byte__Array *)
             (*(pJVar1->klass->vtable).__unknown_1.methodPtr)
                       (pJVar1,(pJVar1->klass->vtable).__unknown_1.method);
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    return pBVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
JsonValidatingReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JsonValidatingReader *this,
          MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    puVar2 = (undefined4 *)
             (*(pJVar1->klass->vtable).__unknown_3.methodPtr)
                       (auStack_3,pJVar1,(pJVar1->klass->vtable).__unknown_3.method);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)__return_storage_ptr__ = *puVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar4;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = uVar5;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = uVar6;
    *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = *(undefined8 *)(puVar2 + 4);
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar8 = (Nullable_1_DateTimeOffset_ *)(*pcVar7)();
  return pNVar8;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JsonValidatingReader *this,MethodInfo *method
          )

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    puVar2 = (undefined4 *)
             (*(pJVar1->klass->vtable).__unknown_2.methodPtr)
                       (auStack_3,pJVar1,(pJVar1->klass->vtable).__unknown_2.method);
    uVar4 = puVar2[1];
    iVar5 = puVar2[2];
    iVar6 = puVar2[3];
    *(undefined4 *)__return_storage_ptr__ = *puVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar4;
    (__return_storage_ptr__->value).flags = iVar5;
    (__return_storage_ptr__->value).hi = iVar6;
    uVar7 = *(undefined8 *)(puVar2 + 4);
    (__return_storage_ptr__->value).lo = (int)uVar7;
    (__return_storage_ptr__->value).mid = (int)((ulonglong)uVar7 >> 0x20);
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pNVar9 = (Nullable_1_Decimal_ *)(*pcVar8)();
  return pNVar9;
}


/* Boolean TestType(JsonSchemaModel, JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_TestType
               (JsonValidatingReader *this,JsonSchemaModel *currentSchema,
               JsonSchemaType__Enum currentType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Invalid_type__Expected__0__but_g);
    cRam_? = '\x01';
  }
  schema = currentSchema;
  if (currentSchema == (JsonSchemaModel *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    NStack_2.hasValue = 0;
    NStack_2._1_3_ = 0;
    NStack_2.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_2,(currentSchema->fields)._Type_k__BackingField,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    bVar3 = Schema::JsonSchemaGenerator::JsonSchemaGenerator_HasFlag_1
                      ((Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)NStack_2,currentType,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCStack_4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
    NStack_2.value = (uint32_t)&UNK_?;
    args = (Object__Array *)func_?();
    currentSchema = (JsonSchemaModel *)(schema->fields)._Type_k__BackingField;
    NStack_2.value = (uint32_t)&currentSchema;
    NStack_2._0_4_ = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType;
    pOVar5 = (Object *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar5 != (Object *)0x0) {
      iVar6 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar5;
    func_?(args->vector,pOVar5);
    pOVar5 = (Object *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType,&stack0xfffffff8);
    if (pOVar5 != (Object *)0x0) {
      iVar6 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    pSVar7 = StringLiteral_Invalid_type__Expected__0__but_g;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_format);
      cRam_? = '\x01';
    }
    NStack_2.value = (uint32_t)StringLiteral_format;
    if (pSVar7 != (String *)0x0) {
      pSVar7 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)pCStack_4,pSVar7,args,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar7,schema,(MethodInfo *)0x0);
      return 0;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,(String *)NStack_2.value,(MethodInfo *)0x0);
  NStack_2.value =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                      );
  NStack_2._0_4_ = this_00;
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Boolean ValidateArray(JsonSchemaModel) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ValidateArray
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (schema != (JsonSchemaModel *)0x0) {
    bVar1 = JsonValidatingReader_TestType(this,schema,JsonSchemaType__Enum_Array,(MethodInfo *)0x0);
    return bVar1;
  }
  return 1;
}


/* Void ValidateBoolean(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateBoolean
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (schema != (JsonSchemaModel *)0x0) {
    bVar1 = JsonValidatingReader_TestType
                      (this,schema,JsonSchemaType__Enum_Boolean,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      JsonValidatingReader_ValidateInEnumAndNotDisallowed
                ((JsonValidatingReader *)0x0,schema,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ValidateCurrentToken() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateCurrentToken(JsonValidatingReader *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>_
                   );
    func_?(&TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModelBuilder);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateArray_Newtonsoft__Json__Schema__JsonSchemaModel_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateObject_Newtonsoft__Json__Schema__JsonSchemaModel_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope);
    cRam_? = '\x01';
  }
  if ((this->fields)._model == (JsonSchemaModel *)0x0) {
    this_00 = (JsonSchemaModelBuilder *)
              func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModelBuilder);
    if (this_00 == (JsonSchemaModelBuilder *)0x0) goto code_?;
    Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder__ctor(this_00,(MethodInfo *)0x0);
    pJVar4 = Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder_Build
                       (this_00,(this->fields)._schema,(MethodInfo *)0x0);
    (this->fields)._model = pJVar4;
    func_?(&(this->fields)._model,pJVar4);
  }
  pJVar5 = (this->fields)._reader;
  if (pJVar5 == (JsonReader *)0x0) goto code_?;
  uVar6 = (*(pJVar5->klass->vtable).get_TokenType.methodPtr)
                    (pJVar5,(pJVar5->klass->vtable).get_TokenType.method);
  switch(uVar6) {
  case 1:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    pFVar8 = (Func_2_Object_Boolean_ *)
             func_?(TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>
                            );
    if (pFVar8 == (Func_2_Object_Boolean_ *)0x0) break;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (pFVar8,(Object *)this,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateObject_Newtonsoft__Json__Schema__JsonSchemaModel_
               ,(MethodInfo *)0x0);
    pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                       ((IEnumerable_1_System_Object_ *)pIVar7,pFVar8,
                        System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>_
                       );
    schemas = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                        (pIVar9,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                        );
    pJVar10 = (JsonValidatingReader_SchemaScope *)
              func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope);
    if (pJVar10 == (JsonValidatingReader_SchemaScope *)0x0) break;
    tokenType = JTokenType__Enum_Object;
    goto code_?;
  case 2:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    pFVar8 = (Func_2_Object_Boolean_ *)
             func_?(TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>
                            );
    if (pFVar8 == (Func_2_Object_Boolean_ *)0x0) break;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (pFVar8,(Object *)this,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateArray_Newtonsoft__Json__Schema__JsonSchemaModel_
               ,(MethodInfo *)0x0);
    pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                       ((IEnumerable_1_System_Object_ *)pIVar7,pFVar8,
                        System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>_
                       );
    schemas = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                        (pIVar9,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                        );
    pJVar10 = (JsonValidatingReader_SchemaScope *)
              func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope);
    if (pJVar10 == (JsonValidatingReader_SchemaScope *)0x0) break;
    tokenType = JTokenType__Enum_Array;
    goto code_?;
  case 3:
    pJVar10 = (JsonValidatingReader_SchemaScope *)
              func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope);
    if (pJVar10 == (JsonValidatingReader_SchemaScope *)0x0) break;
    schemas = (List_1_System_Object_ *)0x0;
    tokenType = JTokenType__Enum_Constructor;
code_?:
    JsonValidatingReader+SchemaScope::JsonValidatingReader_SchemaScope__ctor
              (pJVar10,tokenType,(IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)schemas,
               (MethodInfo *)0x0);
    JsonValidatingReader_Push(this,pJVar10,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  case 4:
    pJVar10 = (this->fields)._currentScope;
    if ((pJVar10 != (JsonValidatingReader_SchemaScope *)0x0) &&
       (pIVar11 = (pJVar10->fields)._schemas,
       pIVar11 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar11);
      uStack_1 = 1;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidatePropertyName(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  default:
    uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_01 = (ArgumentOutOfRangeException *)func_?(uVar6);
    func_?(this_01);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_01,(MethodInfo *)0x0);
    uVar6 = func_?(&
                            MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateCurrentToken__
                           );
    func_?(this_01,uVar6);
    break;
  case 6:
  case 0xc:
  case 0x10:
    goto code_?;
  case 7:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar7);
      uStack_1 = 4;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidateInteger(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 8:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar7);
      uStack_1 = 7;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidateFloat(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 9:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar7);
      uStack_1 = 10;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidateString(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 10:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar7);
      uStack_1 = 0xd;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        if ((pJVar4 != (JsonSchemaModel *)0x0) &&
           (bVar14 = JsonValidatingReader_TestType
                              (this,pJVar4,JsonSchemaType__Enum_Boolean,(MethodInfo *)0x0),
           bVar14 != 0)) {
          JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,pJVar4,(MethodInfo *)0x0);
        }
      }
    }
    break;
  case 0xb:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar7);
      uStack_1 = 0x10;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        if ((pJVar4 != (JsonSchemaModel *)0x0) &&
           (bVar14 = JsonValidatingReader_TestType
                              (this,pJVar4,JsonSchemaType__Enum_Null,(MethodInfo *)0x0), bVar14 != 0)
           ) {
          JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,pJVar4,(MethodInfo *)0x0);
        }
      }
    }
    break;
  case 0xd:
    pJVar10 = (this->fields)._currentScope;
    if ((pJVar10 != (JsonValidatingReader_SchemaScope *)0x0) &&
       (pIVar11 = (pJVar10->fields)._schemas,
       pIVar11 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar11);
      uStack_1 = 0x13;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') {
code_?:
          uStack_1 = 0xffffffff;
          if (iStack_12 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iStack_12);
          }
          uStack_1 = 0xffffffff;
          JsonValidatingReader_Pop(this,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidateEndObject(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 0xe:
    pJVar10 = (this->fields)._currentScope;
    if ((pJVar10 != (JsonValidatingReader_SchemaScope *)0x0) &&
       (pIVar11 = (pJVar10->fields)._schemas,
       pIVar11 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
      iStack_12 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pIVar11);
      uStack_1 = 0x16;
      while (iStack_12 != 0) {
        cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_12);
        if (cVar13 == '\0') goto code_?;
        if (iStack_12 == 0) break;
        pJVar4 = (JsonSchemaModel *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,iStack_12);
        JsonValidatingReader_ValidateEndArray(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 0xf:
    JsonValidatingReader_Pop(this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar6 = func_?();
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  uVar6 = func_?(uVar6);
  func_?(uVar6);
  pJVar15 = (JsonValidatingReader__Class *)in(extraout_DX);
  this->klass = pJVar15;
  return;
code_?:
  uStack_1 = 0xffffffff;
  if (iStack_12 != 0) {
    func_?(0,TypeInfo__System__IDisposable,iStack_12);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  goto code_?;
}


/* Void ValidateEndArray(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateEndArray
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&TypeInfo__System__Nullable<int>);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Array_item_count__0__exceeds_max);
    func_?(&StringLiteral_Array_item_count__0__is_less_tha);
    cRam_? = '\x01';
  }
  schema_00 = schema;
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar1 = (this->fields)._currentScope;
  if (pJVar1 != (JsonValidatingReader_SchemaScope *)0x0) {
    pJVar2 = (JsonSchemaModel *)(pJVar1->fields)._ArrayItemCount_k__BackingField;
    bVar3 = (byte)*(undefined4 *)&(schema->fields)._MaximumItems_k__BackingField;
    pJStack_4 = pJVar2;
    if ((bVar3 == 0) ||
       ((bVar3 & (schema->fields)._MaximumItems_k__BackingField.value < (int)pJVar2) == 0)) {
code_?:
      pJVar2 = pJStack_4;
      bVar3 = (byte)*(undefined4 *)&(schema_00->fields)._MinimumItems_k__BackingField;
      if ((bVar3 == 0) ||
         ((bVar3 & (int)pJStack_4 < (schema_00->fields)._MinimumItems_k__BackingField.value) == 0))
      {
        return;
      }
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCStack_5 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,2);
      schema = pJVar2;
      pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&schema);
      if (pOVar6 != (Object__Array *)0x0) {
        if ((pOVar7 == (Object *)0x0) ||
           (iVar8 = func_?(pOVar7,(pOVar6->klass->_0).element_class), iVar8 != 0)) {
          if (pOVar6->max_length != 0) {
            pOVar6->vector[0] = pOVar7;
            func_?(pOVar6->vector,pOVar7);
            pAStack_9 = *(ArgumentNullException **)
                          &(schema_00->fields)._MinimumItems_k__BackingField;
            iStack_10 = (schema_00->fields)._MinimumItems_k__BackingField.value;
            pOVar7 = (Object *)func_?(TypeInfo__System__Nullable<int>,&pAStack_9);
            if ((pOVar7 != (Object *)0x0) &&
               (iVar8 = func_?(pOVar7,(pOVar6->klass->_0).element_class), iVar8 == 0))
            goto code_?;
            if (1 < pOVar6->max_length) {
              pOVar6->vector[1] = pOVar7;
              func_?(pOVar6->vector + 1,pOVar7);
              pSVar11 = StringLiteral_Array_item_count__0__is_less_tha;
              if (cRam_? == '\0') {
                func_?(&StringLiteral_format);
                cRam_? = '\x01';
              }
              pJStack_4 = (JsonSchemaModel *)StringLiteral_format;
              if (pSVar11 != (String *)0x0) {
                pSVar11 = mscorlib.dll::System::String::String_Format_7
                                   ((IFormatProvider *)pCStack_5,pSVar11,pOVar6,(MethodInfo *)0x0);
                JsonValidatingReader_RaiseError(this,pSVar11,schema_00,(MethodInfo *)0x0);
                return;
              }
              uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
              pAVar13 = (ArgumentNullException *)func_?(uVar12);
              func_?(pAVar13);
              mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                        (pAVar13,(String *)pJStack_4,(MethodInfo *)0x0);
              iStack_10 = func_?(&
                                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                                         );
              pAStack_9 = pAVar13;
              func_?();
              goto code_?;
            }
          }
          goto code_?;
        }
code_?:
        uVar12 = func_?(0);
        func_?(uVar12);
code_?:
        uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar13 = (ArgumentNullException *)func_?(uVar12);
        func_?(pAVar13);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar13,(String *)pCStack_5,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                               );
        func_?(pAVar13,uVar12);
code_?:
        func_?();
      }
    }
    else {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCStack_14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,2);
      schema = pJVar2;
      pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&schema);
      if (pOVar6 != (Object__Array *)0x0) {
        if ((pOVar7 != (Object *)0x0) &&
           (iVar8 = func_?(pOVar7,(pOVar6->klass->_0).element_class), iVar8 == 0)) {
code_?:
          uVar12 = func_?(0);
          func_?(uVar12);
code_?:
          uVar12 = func_?(0);
          func_?(uVar12);
          goto code_?;
        }
        if (pOVar6->max_length != 0) {
          pOVar6->vector[0] = pOVar7;
          func_?(pOVar6->vector,pOVar7);
          pAStack_9 = *(ArgumentNullException **)&(schema_00->fields)._MaximumItems_k__BackingField
          ;
          iStack_10 = (schema_00->fields)._MaximumItems_k__BackingField.value;
          pOVar7 = (Object *)func_?(TypeInfo__System__Nullable<int>,&pAStack_9);
          if ((pOVar7 != (Object *)0x0) &&
             (iVar8 = func_?(pOVar7,(pOVar6->klass->_0).element_class), iVar8 == 0))
          goto code_?;
          if (pOVar6->max_length < 2) goto code_?;
          pOVar6->vector[1] = pOVar7;
          func_?(pOVar6->vector + 1,pOVar7);
          pSVar11 = StringLiteral_Array_item_count__0__exceeds_max;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_format);
            cRam_? = '\x01';
          }
          pCStack_5 = (CultureInfo *)StringLiteral_format;
          if (pSVar11 != (String *)0x0) {
            pSVar11 = mscorlib.dll::System::String::String_Format_7
                               ((IFormatProvider *)pCStack_14,pSVar11,pOVar6,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar11,schema_00,(MethodInfo *)0x0);
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  uVar12 = func_?(0);
  func_?(uVar12);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ValidateEndObject(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateEndObject
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_
                   );
    func_?(&
                    System__Collections__Generic__List<System::String>_MethodInfo__System__Linq__Enumerable__ToList<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader____c___ValidateEndObject_b__41_0_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__JsonValidatingReader____c___ValidateEndObject_b__41_1_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_Required_properties_are_missing_);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar1 = (this->fields)._currentScope;
  if (pJVar1 == (JsonValidatingReader_SchemaScope *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    source = (pJVar1->fields)._requiredProperties;
    if (source == (Dictionary_2_System_String_System_Boolean_ *)0x0) {
      return;
    }
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
    }
    this_00 = TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9__41_0;
    if (this_00 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_Boolean_ *)
        0x0) {
      if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
      }
      unaff_EBX = (String *)
                  TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9;
      this_00 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_Boolean_
                 *)func_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>
                                  );
      if (this_00 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_Boolean_ *)
          0x0) goto code_?;
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                ((Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)this_00,(Object *)unaff_EBX,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader____c___ValidateEndObject_b__41_0_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9__41_0 = this_00;
      func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->
                       __9__41_0,this_00);
    }
    unaff_EBX = (String *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                          ((IEnumerable_1_KeyValuePair_2_System_Object_System_Boolean_ *)source,
                           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Boolean_Boolean_
                            *)this_00,
                           System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>_
                          );
    if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
    }
    this_01 = TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9__41_1;
    if (this_01 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_String_ *)0x0
       ) {
      if ((TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonValidatingReader____c);
      }
      object = TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9;
      this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_String_
                 *)func_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>
                                  );
      if (this_01 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_String_ *)
          0x0) goto code_?;
      mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,Object]::
      Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                  *)this_01,(Object *)object,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader____c___ValidateEndObject_b__41_1_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->__9__41_1 = this_01;
      func_?(&TypeInfo__Newtonsoft__Json__JsonValidatingReader____c->static_fields->
                       __9__41_1,this_01);
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select
                          ((IEnumerable_1_KeyValuePair_2_System_Object_System_Boolean_ *)unaff_EBX,
                           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Boolean_Object_
                            *)this_01,
                           System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_
                          );
    this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                        (source_00,
                         System__Collections__Generic__List<System::String>_MethodInfo__System__Linq__Enumerable__ToList<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                        );
    if (this_02 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    if ((this_02->fields)._size < 1) {
      return;
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                      (this_02,
                       MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    pSVar3 = mscorlib.dll::System::String::String_Join
                       (::StringLiteral___,(String__Array *)value,(MethodInfo *)0x0);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar3 != (String *)0x0) &&
       (iVar4 = func_?(pSVar3,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length != 0) {
      args->vector[0] = (Object *)pSVar3;
      func_?(args->vector,pSVar3);
      pSVar3 = StringLiteral_Required_properties_are_missing_;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      unaff_EBX = StringLiteral_format;
      if (pSVar3 != (String *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)provider,pSVar3,args,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar3,schema,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_03 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_03);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_03,unaff_EBX,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?(this_03);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ValidateFloat(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ValidateFloat
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  schema_00 = schema;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&MethodInfo__System__Nullable<double>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<double>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<double>__get_Value__);
    func_?(&TypeInfo__System__Nullable<double>);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Float__0__equals_minimum_value_o);
    func_?(&StringLiteral_Float__0__is_less_than_minimum_v);
    func_?(&StringLiteral_Float__0__exceeds_maximum_value_);
    func_?(&StringLiteral_Float__0__equals_maximum_value_o);
    func_?(&StringLiteral_Float__0__is_not_evenly_divisibl);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  bVar1 = JsonValidatingReader_TestType(this,schema,JsonSchemaType__Enum_Float,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
  pJVar2 = (this->fields)._reader;
  if (pJVar2 == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    value = (Object *)(*(pJVar2->klass->vtable).get_Value.methodPtr)();
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Convert::Convert_ToDouble
                         (value,(IFormatProvider *)pCVar3,(MethodInfo *)0x0);
    if ((schema->fields)._Maximum_k__BackingField.hasValue != 0) {
      if (((byte)*(undefined8 *)&(schema->fields)._Maximum_k__BackingField &
          (schema->fields)._Maximum_k__BackingField.value < value_00) != 0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pOVar4 = (Object__Array *)func_?();
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        schema = (JsonSchemaModel *)JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0)
        ;
        if (pOVar4 == (Object__Array *)0x0) goto code_?;
        if ((schema == (JsonSchemaModel *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
          func_?();
          schema = (JsonSchemaModel *)func_?();
          if ((schema == (JsonSchemaModel *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
            func_?();
            pSVar6 = StringLiteral_Float__0__exceeds_maximum_value_;
            if (cRam_? == '\0') {
              func_?(&StringLiteral_format);
              cRam_? = '\x01';
            }
            schema = (JsonSchemaModel *)StringLiteral_format;
            if (pSVar6 != (String *)0x0) {
              pSVar6 = mscorlib.dll::System::String::String_Format_7
                                 ((IFormatProvider *)pCVar3,pSVar6,pOVar4,(MethodInfo *)0x0);
              JsonValidatingReader_RaiseError(this,pSVar6,schema_00,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
        }
        else {
          func_?();
          func_?();
        }
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
        this_00 = (ArgumentNullException *)func_?(uVar7);
        func_?(this_00);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (this_00,(String *)schema,(MethodInfo *)0x0);
        func_?(&
                        MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                       );
        func_?();
        goto code_?;
      }
code_?:
      if (((schema_00->fields)._ExclusiveMaximum_k__BackingField == 0) ||
         ((value_00 == (schema_00->fields)._Maximum_k__BackingField.value &
          (byte)*(undefined8 *)&(schema_00->fields)._Maximum_k__BackingField) == 0))
      goto code_?;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar4 = (Object__Array *)func_?();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      schema = (JsonSchemaModel *)JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
      if (pOVar4 == (Object__Array *)0x0) goto code_?;
      if ((schema != (JsonSchemaModel *)0x0) && (iVar5 = func_?(), iVar5 == 0))
      goto code_?;
      func_?();
      iVar5 = func_?();
      if ((iVar5 == 0) || (iVar5 = func_?(), iVar5 != 0)) {
        func_?();
        pSVar6 = StringLiteral_Float__0__equals_maximum_value_o;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        schema = (JsonSchemaModel *)StringLiteral_format;
        if (pSVar6 == (String *)0x0) goto code_?;
        pSVar6 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pCVar3,pSVar6,pOVar4,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar6,schema_00,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((schema_00->fields)._Minimum_k__BackingField.hasValue != 0) {
      if (((byte)*(undefined8 *)&(schema_00->fields)._Minimum_k__BackingField &
          value_00 < (schema_00->fields)._Minimum_k__BackingField.value) != 0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pOVar4 = (Object__Array *)func_?();
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar6 = JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
        if (pOVar4 == (Object__Array *)0x0) goto code_?;
        if ((pSVar6 != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
        goto code_?;
        func_?();
        iVar5 = func_?();
        if ((iVar5 == 0) || (iVar5 = func_?(), iVar5 != 0)) {
          func_?();
          pSVar6 = StringLiteral_Float__0__is_less_than_minimum_v;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_format);
            cRam_? = '\x01';
          }
          schema = (JsonSchemaModel *)StringLiteral_format;
          if (pSVar6 == (String *)0x0) goto code_?;
          pSVar6 = mscorlib.dll::System::String::String_Format_7
                             ((IFormatProvider *)pCVar3,pSVar6,pOVar4,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar6,schema_00,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if (((schema_00->fields)._ExclusiveMinimum_k__BackingField == 0) ||
         ((value_00 == (schema_00->fields)._Minimum_k__BackingField.value &
          (byte)*(undefined8 *)&(schema_00->fields)._Minimum_k__BackingField) == 0))
      goto code_?;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar4 = (Object__Array *)func_?();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
      if (pOVar4 == (Object__Array *)0x0) goto code_?;
      if ((pSVar6 != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
      goto code_?;
      func_?();
      iVar5 = func_?();
      if ((iVar5 == 0) || (iVar5 = func_?(), iVar5 != 0)) {
        func_?();
        pSVar6 = StringLiteral_Float__0__equals_minimum_value_o;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        schema = (JsonSchemaModel *)StringLiteral_format;
        if (pSVar6 == (String *)0x0) goto code_?;
        pSVar6 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pCVar3,pSVar6,pOVar4,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar6,schema_00,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((schema_00->fields)._DivisibleBy_k__BackingField.hasValue == 0) {
      return;
    }
    mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
              ((Nullable_1_Double_ *)&stack0xffffffd8,
               *(MethodInfo **)((int)&(schema_00->fields)._DivisibleBy_k__BackingField.value + 4));
    fVar8 = (float10)func_?();
    bVar1 = JsonValidatingReader_IsZero
                      ((double)fVar8,(MethodInfo *)((ulonglong)(double)fVar8 >> 0x20));
    if (bVar1 != 0) {
      return;
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    uStack_9 = (double)CONCAT44(TypeInfo__System__Object,&UNK_?);
    pOVar4 = (Object__Array *)func_?();
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar6 = JsonConvert::JsonConvert_ToString_12(uStack_9,(MethodInfo *)0x0);
    if (pOVar4 == (Object__Array *)0x0) goto code_?;
    if ((pSVar6 == (String *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
      func_?();
      iVar5 = func_?();
      if ((iVar5 != 0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
      func_?();
      pSVar6 = StringLiteral_Float__0__is_not_evenly_divisibl;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      schema = (JsonSchemaModel *)StringLiteral_format;
      if (pSVar6 != (String *)0x0) {
        pSVar6 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pCVar3,pSVar6,pOVar4,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar6,schema_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ValidateInEnumAndNotDisallowed(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateInEnumAndNotDisallowed
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
                   );
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ContainsValue<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_Value__
                   );
    func_?(&TypeInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__IO__StringWriter);
    func_?(&StringLiteral_Value__0__is_not_defined_in_enum);
    func_?(&StringLiteral_Type__0__is_disallowed_);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 == (JsonReader *)0x0) goto code_?;
  unaff_EDI = (StringWriter *)
              (*(pJVar1->klass->vtable).get_Value.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_Value.method);
  this_00 = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this_00 == (JValue *)0x0) goto code_?;
  Linq::JValue::JValue__ctor_11(this_00,(Object *)unaff_EDI,(MethodInfo *)0x0);
  if ((schema->fields)._Enum_k__BackingField != (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    unaff_EDI = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
    if (unaff_EDI == (StringWriter *)0x0) goto code_?;
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (unaff_EDI,(IFormatProvider *)pCVar2,(MethodInfo *)0x0);
    NStack_3.value = func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
    if ((JsonTextWriter *)NStack_3.value == (JsonTextWriter *)0x0) goto code_?;
    JsonTextWriter::JsonTextWriter__ctor
              ((JsonTextWriter *)NStack_3.value,(TextWriter *)unaff_EDI,(MethodInfo *)0x0);
    pMVar4 = 
    Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
    ;
    pIVar5 = ((
              Newtonsoft__Json__JsonConverter__MethodInfo__System__Array__Empty<Newtonsoft::Json::JsonConverter>______
              ->field7_0x1c).rgctx_data)->klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?();
    }
    if (pIVar5->cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if ((*(byte *)((int)((pMVar4->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    (*(this_00->klass->vtable).WriteTo.methodPtr)(this_00,NStack_3.value);
    NStack_3.value = (uint32_t)(schema->fields)._Enum_k__BackingField;
    this_01 = (TweenRunner_1_FloatTween_ *)
              func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer);
    if (this_01 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
    bVar6 = Json::Utilities::CollectionUtils::CollectionUtils_ContainsValue
                      ((IEnumerable_1_System_Object_ *)NStack_3.value,(Object *)this_00,
                       (IEqualityComparer_1_System_Object_ *)this_01,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ContainsValue<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                      );
    if (bVar6 != 0) goto code_?;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    unaff_EDI = (StringWriter *)
                (*(unaff_EDI->klass->vtable).ToString.methodPtr)
                          (unaff_EDI,(unaff_EDI->klass->vtable).ToString.method);
    if (pOVar7 == (Object__Array *)0x0) goto code_?;
    if ((unaff_EDI != (StringWriter *)0x0) &&
       (iVar8 = func_?(unaff_EDI,(pOVar7->klass->_0).element_class), iVar8 == 0))
    goto code_?;
    if (pOVar7->max_length == 0) goto code_?;
    pOVar7->vector[0] = (Object *)unaff_EDI;
    func_?(pOVar7->vector,unaff_EDI);
    unaff_EDI = (StringWriter *)StringLiteral_Value__0__is_not_defined_in_enum;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_format);
      cRam_? = '\x01';
    }
    NStack_3.value = (uint32_t)StringLiteral_format;
    if (unaff_EDI != (StringWriter *)0x0) {
      pSVar9 = mscorlib.dll::System::String::String_Format_7
                          ((IFormatProvider *)pCVar2,(String *)unaff_EDI,pOVar7,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar9,schema,(MethodInfo *)0x0);
      goto code_?;
    }
    goto code_?;
  }
code_?:
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 == (JsonReader *)0x0) goto code_?;
  uVar10 = (*(pJVar1->klass->vtable).get_TokenType.methodPtr)
                     (pJVar1,(pJVar1->klass->vtable).get_TokenType.method);
  switch(uVar10) {
  case 1:
    NStack_3.hasValue = 0;
    NStack_3._1_3_ = 0;
    NStack_3.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_3,0x10,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11._0_4_ = NStack_3._0_4_;
    NStack_11.value = NStack_3.value;
    break;
  case 2:
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              ((Nullable_1_UInt32_ *)&stack0xffffffe4,0x20,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11.hasValue = 0;
    NStack_11._1_3_ = 0;
    NStack_11.value = 0;
    break;
  default:
    NVar12.hasValue = 0;
    NVar12._1_3_ = 0;
    NVar12.value = 0;
    goto code_?;
  case 7:
    NStack_13.hasValue = 0;
    NStack_13._1_3_ = 0;
    NStack_13.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_13,4,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11._0_4_ = NStack_13._0_4_;
    NStack_11.value = NStack_13.value;
    break;
  case 8:
    NStack_14.hasValue = 0;
    NStack_14._1_3_ = 0;
    NStack_14.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_14,2,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11._0_4_ = NStack_14._0_4_;
    NStack_11.value = NStack_14.value;
    break;
  case 9:
    NStack_15.hasValue = 0;
    NStack_15._1_3_ = 0;
    NStack_15.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_15,1,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11._0_4_ = NStack_15._0_4_;
    NStack_11.value = NStack_15.value;
    break;
  case 10:
    NStack_16.hasValue = 0;
    NStack_16._1_3_ = 0;
    NStack_16.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_16,8,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
    NStack_11._0_4_ = NStack_16._0_4_;
    NStack_11.value = NStack_16.value;
    break;
  case 0xb:
    NVar12.hasValue = 0;
    NVar12._1_3_ = 0;
    NVar12.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              ((Nullable_1_UInt32_ *)&stack0xffffffbc,0x40,
               MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
              );
code_?:
    NStack_11._0_4_ = NVar12._0_4_;
    NStack_11.value = NVar12.value;
  }
  if (NStack_11.hasValue == 0) {
    return;
  }
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            ((Nullable_1_UInt32_ *)&stack0xffffffbc,0,(MethodInfo *)0x0);
  flag = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                   (&NStack_11,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_Value__
                   );
  value.value = 0;
  value._0_4_ = flag;
  bVar6 = Schema::JsonSchemaGenerator::JsonSchemaGenerator_HasFlag_1(value,flag,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    return;
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    NStack_13.value = (uint32_t)&UNK_?;
    func_?();
  }
  NStack_13.value = (uint32_t)&UNK_?;
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  NStack_13.value = (uint32_t)TypeInfo__System__Object;
  NStack_13._0_4_ = &UNK_?;
  pOVar7 = (Object__Array *)func_?();
  NStack_13._0_4_ = &stack0xffffffbc;
  NStack_14.value = (uint32_t)TypeInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>;
  NStack_14._0_4_ = &UNK_?;
  unaff_EDI = (StringWriter *)func_?();
  if (pOVar7 == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
code_?:
    func_?();
code_?:
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException);
    pOVar7 = (Object__Array *)func_?(uVar10);
    func_?(pOVar7);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)pOVar7,(String *)NStack_3.value,(MethodInfo *)0x0);
    uVar10 = func_?(&
                             MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                            );
    func_?(pOVar7,uVar10);
  }
  else if ((unaff_EDI == (StringWriter *)0x0) ||
          (iVar8 = func_?(unaff_EDI,(pOVar7->klass->_0).element_class), iVar8 != 0)) {
    if (pOVar7->max_length == 0) goto code_?;
    pOVar7->vector[0] = (Object *)unaff_EDI;
    func_?(pOVar7->vector,unaff_EDI);
    pSVar9 = StringLiteral_Type__0__is_disallowed_;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_format);
      cRam_? = '\x01';
    }
    NStack_3.value = (uint32_t)StringLiteral_format;
    unaff_EDI = (StringWriter *)0x0;
    if (pSVar9 != (String *)0x0) {
      pSVar9 = mscorlib.dll::System::String::String_Format_7
                          ((IFormatProvider *)pCVar2,pSVar9,pOVar7,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar9,schema,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar10 = func_?(0);
  func_?(uVar10);
code_?:
  uVar17 = func_?();
  uVar18 = (undefined2)((uint6)uVar17 >> 0x20);
  pbVar19 = (byte *)((int)uVar17 + -0x16);
  bVar20 = *pbVar19;
  bVar21 = (byte)extraout_CX;
  *pbVar19 = *pbVar19 + bVar21;
  pbVar19 = (byte *)((int)uVar17 + -2);
  bVar22 = (byte)((uint)pbVar19 >> 8);
  bVar23 = *pbVar19 + bVar22;
  bVar24 = CARRY1(*pbVar19,bVar22) || CARRY1(bVar23,CARRY1(bVar20,bVar21));
  *pbVar19 = bVar23 + CARRY1(bVar20,bVar21);
  uVar25 = in(uVar18);
  pbVar19 = (byte *)(CONCAT31((int3)((uint)pbVar19 >> 8),uVar25) + -1);
  bVar23 = (byte)((uint)pbVar19 >> 8);
  bVar20 = *pbVar19 + bVar23;
  bVar26 = CARRY1(*pbVar19,bVar23) || CARRY1(bVar20,bVar24);
  *pbVar19 = bVar20 + bVar24;
  uVar25 = in(uVar18);
  pbVar19 = (byte *)(CONCAT31((int3)((uint)pbVar19 >> 8),uVar25) + -1);
  bVar23 = (byte)((uint)pbVar19 >> 8);
  bVar20 = *pbVar19 + bVar23;
  bVar24 = CARRY1(*pbVar19,bVar23) || CARRY1(bVar20,bVar26);
  *pbVar19 = bVar20 + bVar26;
  uVar25 = in(uVar18);
  pbVar19 = (byte *)(CONCAT31((int3)((uint)pbVar19 >> 8),uVar25) + -1);
  bVar23 = (byte)((uint)pbVar19 >> 8);
  bVar20 = *pbVar19 + bVar23;
  bVar26 = CARRY1(*pbVar19,bVar23) || CARRY1(bVar20,bVar24);
  *pbVar19 = bVar20 + bVar24;
  uVar25 = in(uVar18);
  iVar8 = CONCAT31((int3)((uint)pbVar19 >> 8),uVar25);
  pbVar19 = (byte *)((int)&unaff_EDI[-1].fields._._._identity + 3);
  bVar20 = *pbVar19;
  bVar22 = (byte)((ushort)extraout_CX >> 8);
  bVar23 = *pbVar19 + bVar22;
  *pbVar19 = bVar23 + bVar26;
  pcVar27 = (char *)((int)pOVar7[-0x7c54d4].vector + 0x1b);
  *pcVar27 = *pcVar27 + (char)((uint6)uVar17 >> 0x20) +
            (CARRY1(bVar20,bVar22) || CARRY1(bVar23,bVar26));
  iVar28 = iVar8 + 0x68ffc242;
  out(uVar18,CONCAT31((int3)((uint)iVar28 >> 8),(char)iVar28 + '\f' + (0x97003dbb < iVar8 - 2U)));
  return;
}


/* Void ValidateInteger(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateInteger
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&MethodInfo__System__Nullable<double>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<double>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<double>__get_Value__);
    func_?(&TypeInfo__System__Nullable<double>);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Integer__0__is_less_than_minimum);
    func_?(&StringLiteral_Integer__0__is_not_evenly_divisi);
    func_?(&StringLiteral_Integer__0__equals_maximum_value);
    func_?(&StringLiteral_Integer__0__exceeds_maximum_valu);
    func_?(&StringLiteral_Integer__0__equals_minimum_value);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  bVar1 = JsonValidatingReader_TestType(this,schema,JsonSchemaType__Enum_Integer,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
  pJVar2 = (this->fields)._reader;
  if (pJVar2 == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar4 = (ArgumentNullException *)func_?(uVar3);
    func_?(pAVar4);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar4,(String *)pCStack_5,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    value = (Object *)(*(pJVar2->klass->vtable).get_Value.methodPtr)();
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt64
                       (value,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
    if ((schema->fields)._Maximum_k__BackingField.hasValue == 0) goto code_?;
    uVar3 = *(undefined4 *)&(schema->fields)._Maximum_k__BackingField;
    uVar8 = *(undefined4 *)&(schema->fields)._Maximum_k__BackingField.field_0x4;
    func_?();
    dVar9 = (schema->fields)._Maximum_k__BackingField.value;
    if (((byte)*(undefined8 *)&(schema->fields)._Maximum_k__BackingField &
        (dVar9 <= (double)CONCAT44(uVar8,uVar3) && (double)CONCAT44(uVar8,uVar3) != dVar9)) != 0
       ) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCStack_5 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      pOStack_11 = (Object__Array__Class *)func_?();
      if (pOVar10 == (Object__Array *)0x0) goto code_?;
      if ((pOStack_11 == (Object__Array__Class *)0x0) || (iVar12 = func_?(), iVar12 != 0)) {
        func_?();
        pOStack_11 = (Object__Array__Class *)func_?();
        if ((pOStack_11 != (Object__Array__Class *)0x0) && (iVar12 = func_?(), iVar12 == 0))
        goto code_?;
        func_?();
        pSVar13 = StringLiteral_Integer__0__exceeds_maximum_valu;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        pOStack_11 = (Object__Array__Class *)StringLiteral_format;
        if (pSVar13 != (String *)0x0) {
          pSVar13 = mscorlib.dll::System::String::String_Format_7
                             ((IFormatProvider *)pCStack_5,pSVar13,pOVar10,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else {
code_?:
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
      }
      uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar4 = (ArgumentNullException *)func_?(uVar3);
      func_?(pAVar4);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar4,(String *)pOStack_11,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                     );
      func_?();
      goto code_?;
    }
code_?:
    if ((schema->fields)._ExclusiveMaximum_k__BackingField != 0) {
      uVar3 = *(undefined4 *)&(schema->fields)._Maximum_k__BackingField;
      uVar8 = *(undefined4 *)&(schema->fields)._Maximum_k__BackingField.field_0x4;
      func_?();
      if (((double)CONCAT44(uVar8,uVar3) == (schema->fields)._Maximum_k__BackingField.value &
          (byte)*(undefined8 *)&(schema->fields)._Maximum_k__BackingField) == 0)
      goto code_?;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOStack_11 = (Object__Array__Class *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      pCStack_5 = (CultureInfo *)func_?();
      if (pOVar10 == (Object__Array *)0x0) goto code_?;
      if ((pCStack_5 != (CultureInfo *)0x0) && (iVar12 = func_?(), iVar12 == 0))
      goto code_?;
      func_?();
      pCStack_5 = (CultureInfo *)func_?();
      if ((pCStack_5 != (CultureInfo *)0x0) && (iVar12 = func_?(), iVar12 == 0))
      goto code_?;
      func_?();
      pSVar13 = StringLiteral_Integer__0__equals_maximum_value;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      pCStack_5 = (CultureInfo *)StringLiteral_format;
      if (pSVar13 != (String *)0x0) {
        pSVar13 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pOStack_11,pSVar13,pOVar10,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((schema->fields)._Minimum_k__BackingField.hasValue == 0) goto code_?;
    uVar3 = *(undefined4 *)&(schema->fields)._Minimum_k__BackingField;
    uVar8 = *(undefined4 *)&(schema->fields)._Minimum_k__BackingField.field_0x4;
    func_?();
    dVar9 = (schema->fields)._Minimum_k__BackingField.value;
    if (((byte)*(undefined8 *)&(schema->fields)._Minimum_k__BackingField &
        ((double)CONCAT44(uVar8,uVar3) <= dVar9 && dVar9 != (double)CONCAT44(uVar8,uVar3))) != 0
       ) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      pCStack_5 = (CultureInfo *)func_?();
      if (pOVar10 == (Object__Array *)0x0) goto code_?;
      if ((pCStack_5 != (CultureInfo *)0x0) && (iVar12 = func_?(), iVar12 == 0))
      goto code_?;
      func_?();
      iVar12 = func_?();
      if ((iVar12 == 0) || (iVar12 = func_?(), iVar12 != 0)) {
        func_?();
        pSVar13 = StringLiteral_Integer__0__is_less_than_minimum;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        pCStack_5 = (CultureInfo *)StringLiteral_format;
        if (pSVar13 == (String *)0x0) goto code_?;
        pSVar13 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pCVar6,pSVar13,pOVar10,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((schema->fields)._ExclusiveMinimum_k__BackingField != 0) {
      uVar3 = *(undefined4 *)&(schema->fields)._Minimum_k__BackingField;
      uVar8 = *(undefined4 *)&(schema->fields)._Minimum_k__BackingField.field_0x4;
      func_?();
      if (((double)CONCAT44(uVar8,uVar3) == (schema->fields)._Minimum_k__BackingField.value &
          (byte)*(undefined8 *)&(schema->fields)._Minimum_k__BackingField) == 0)
      goto code_?;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      pCStack_5 = (CultureInfo *)func_?();
      if (pOVar10 == (Object__Array *)0x0) goto code_?;
      if ((pCStack_5 != (CultureInfo *)0x0) && (iVar12 = func_?(), iVar12 == 0))
      goto code_?;
      func_?();
      iVar12 = func_?();
      if ((iVar12 == 0) || (iVar12 = func_?(), iVar12 != 0)) {
        func_?();
        pSVar13 = StringLiteral_Integer__0__equals_minimum_value;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        pCStack_5 = (CultureInfo *)StringLiteral_format;
        if (pSVar13 == (String *)0x0) goto code_?;
        pSVar13 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)pCVar6,pSVar13,pOVar10,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((schema->fields)._DivisibleBy_k__BackingField.hasValue == 0) {
      return;
    }
    mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
              ((Nullable_1_Double_ *)&stack0xffffffd8,
               *(MethodInfo **)((int)&(schema->fields)._DivisibleBy_k__BackingField.value + 4));
    func_?();
    fVar14 = (float10)func_?();
    bVar1 = JsonValidatingReader_IsZero
                      ((double)fVar14,(MethodInfo *)((ulonglong)(double)fVar14 >> 0x20));
    if (bVar1 != 0) {
      return;
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
              ((MethodInfo *)0x0);
    uVar3 = 2;
    pOStack_11 = TypeInfo__System__Object;
    pOVar10 = (Object__Array *)func_?();
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar13 = JsonConvert::JsonConvert_ToString_9
                       (CONCAT44((int)((ulonglong)iVar7 >> 0x20),uVar3),(MethodInfo *)0x0);
    if (pOVar10 == (Object__Array *)0x0) goto code_?;
    if ((pSVar13 == (String *)0x0) || (iVar12 = func_?(), iVar12 != 0)) {
      func_?();
      iVar12 = func_?();
      if ((iVar12 != 0) && (iVar12 = func_?(), iVar12 == 0)) goto code_?;
      func_?();
      pSVar13 = StringLiteral_Integer__0__is_not_evenly_divisi;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      paramName = StringLiteral_format;
      if (pSVar13 != (String *)0x0) {
        pSVar13 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)&UNK_?,pSVar13,pOVar10,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        return;
      }
      uVar3 = func_?();
      pAVar4 = (ArgumentNullException *)func_?(uVar3);
      func_?(pAVar4);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar4,paramName,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                     );
      func_?();
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ValidateNull(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ValidateNull
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (schema != (JsonSchemaModel *)0x0) {
    bVar1 = JsonValidatingReader_TestType(this,schema,JsonSchemaType__Enum_Null,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      JsonValidatingReader_ValidateInEnumAndNotDisallowed
                ((JsonValidatingReader *)0x0,schema,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Boolean ValidateObject(JsonSchemaModel) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateObject
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (schema != (JsonSchemaModel *)0x0) {
    bVar1 = JsonValidatingReader_TestType(this,schema,JsonSchemaType__Enum_Object,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  return 1;
}


/* Void ValidatePropertyName(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidatePropertyName
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__set_Item_System__String__bool_
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Property___0___has_not_been_defi);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    pSStack_3 = (String *)
                (*(pJVar1->klass->vtable).get_Value.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_Value.method);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    propertyName = mscorlib.dll::System::Convert::Convert_ToString_1
                             ((Object *)pSStack_3,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
    pJVar5 = (this->fields)._currentScope;
    if ((pJVar5 == (JsonValidatingReader_SchemaScope *)0x0) ||
       (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (pJVar5->fields)._requiredProperties,
       this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))
    goto code_?;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)propertyName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__ContainsKey_System__String_
                      );
    if (bVar6 != 0) {
      pJVar5 = (this->fields)._currentScope;
      if ((pJVar5 == (JsonValidatingReader_SchemaScope *)0x0) ||
         (this_01 = (Dictionary_2_System_Object_System_Object_ *)
                    (pJVar5->fields)._requiredProperties,
         this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_01,(Object *)propertyName,(Object *)0x1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__set_Item_System__String__bool_
                );
    }
    if (((schema->fields)._AllowAdditionalProperties_k__BackingField != 0) ||
       (bVar6 = JsonValidatingReader_IsPropertyDefinied(this,schema,propertyName,(MethodInfo *)0x0),
       bVar6 != 0)) {
code_?:
      pJVar5 = (this->fields)._currentScope;
      if (pJVar5 != (JsonValidatingReader_SchemaScope *)0x0) {
        (pJVar5->fields)._CurrentPropertyName_k__BackingField = propertyName;
        func_?(&(pJVar5->fields)._CurrentPropertyName_k__BackingField,propertyName);
        return;
      }
      goto code_?;
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((propertyName != (String *)0x0) &&
       (iVar7 = func_?(propertyName,(args->klass->_0).element_class), iVar7 == 0))
    goto code_?;
    if (args->max_length != 0) {
      args->vector[0] = (Object *)propertyName;
      func_?(args->vector,propertyName);
      pSVar8 = StringLiteral_Property___0___has_not_been_defi;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      pSStack_3 = StringLiteral_format;
      if (pSVar8 == (String *)0x0) goto code_?;
      pSVar8 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)pCVar4,pSVar8,args,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar8,schema,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_02 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_02);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_02,pSStack_3,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this_02,uVar2);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ValidateString(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateString
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<System::String>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<System::String>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&TypeInfo__System__Nullable<int>);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral_String___0___does_not_match_rege);
    func_?(&StringLiteral_String___0___exceeds_maximum_len);
    func_?(&StringLiteral_String___0___is_less_than_minimu);
    cRam_? = '\x01';
  }
  if ((schema == (JsonSchemaModel *)0x0) ||
     (bVar4 = JsonValidatingReader_TestType
                        (this,schema,JsonSchemaType__Enum_String,(MethodInfo *)0x0), bVar4 == 0))
  goto code_?;
  JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
  pJVar5 = (this->fields)._reader;
  if ((pJVar5 == (JsonReader *)0x0) ||
     (piVar6 = (int *)(*(pJVar5->klass->vtable).get_Value.methodPtr)(), piVar6 == (int *)0x0)) {
code_?:
    func_?();
  }
  else {
    input = (String *)(**(code **)(*piVar6 + 0xd4))();
    bVar7 = (byte)*(undefined4 *)&(schema->fields)._MaximumLength_k__BackingField;
    if (bVar7 != 0) {
      if (input == (String *)0x0) goto code_?;
      if ((bVar7 & (schema->fields)._MaximumLength_k__BackingField.value <
                    (input->fields)._stringLength) == 0) goto code_?;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                ((MethodInfo *)0x0);
      pOVar8 = (Object__Array *)func_?();
      if (pOVar8 == (Object__Array *)0x0) goto code_?;
      iVar9 = func_?();
      if (iVar9 == 0) {
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
        func_?();
      }
      else {
        pSVar10 = input;
        func_?();
        pCStack_11 = (CultureInfo *)func_?();
        if ((pCStack_11 != (CultureInfo *)0x0) && (iVar9 = func_?(), iVar9 == 0))
        goto code_?;
        func_?();
        pSVar12 = StringLiteral_String___0___exceeds_maximum_len;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_format);
          cRam_? = '\x01';
        }
        pCStack_11 = (CultureInfo *)StringLiteral_format;
        if (pSVar12 != (String *)0x0) {
          pSVar10 = mscorlib.dll::System::String::String_Format_7
                             ((IFormatProvider *)pSVar10,pSVar12,pOVar8,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar10,schema,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      uVar13 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar14 = (ArgumentNullException *)func_?(uVar13);
      func_?(pAVar14);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar14,(String *)pCStack_11,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                     );
      func_?();
      goto code_?;
    }
code_?:
    bVar7 = (byte)*(undefined4 *)&(schema->fields)._MinimumLength_k__BackingField;
    if (bVar7 == 0) {
code_?:
      if ((schema->fields)._Patterns_k__BackingField == (IList_1_System_String_ *)0x0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      iVar9 = func_?();
      uStack_1 = 1;
      while (iVar9 != 0) {
        cVar15 = func_?();
        if (cVar15 == '\0') {
          uStack_1 = 0xffffffff;
          if (iVar9 != 0) {
            func_?();
          }
          goto code_?;
        }
        if (iVar9 == 0) break;
        pSVar10 = (String *)func_?();
        if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        bVar4 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                          (input,pSVar10,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                    ((MethodInfo *)0x0);
          pCStack_11 = (CultureInfo *)0x2;
          pOVar8 = (Object__Array *)func_?();
          if (pOVar8 == (Object__Array *)0x0) break;
          if ((input != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
          goto code_?;
          pSVar12 = input;
          func_?();
          if ((pSVar10 != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
          goto code_?;
          func_?();
          pSVar10 = StringLiteral_String___0___does_not_match_rege;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_format);
            cRam_? = '\x01';
          }
          pCStack_11 = (CultureInfo *)StringLiteral_format;
          if (pSVar10 == (String *)0x0) goto code_?;
          pSVar10 = mscorlib.dll::System::String::String_Format_7
                             ((IFormatProvider *)pSVar12,pSVar10,pOVar8,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar10,schema,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    if (input == (String *)0x0) goto code_?;
    if ((bVar7 & (input->fields)._stringLength <
                  (schema->fields)._MinimumLength_k__BackingField.value) == 0)
    goto code_?;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCStack_11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    pOVar8 = (Object__Array *)func_?();
    if (pOVar8 == (Object__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    func_?();
    iVar9 = func_?();
    if ((iVar9 == 0) || (iVar9 = func_?(), iVar9 != 0)) {
      func_?();
      pSVar10 = StringLiteral_String___0___is_less_than_minimu;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      pSVar12 = StringLiteral_format;
      if (pSVar10 == (String *)0x0) goto code_?;
      pSVar10 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)pCStack_11,pSVar10,pOVar8,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar10,schema,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pSVar12 = (String *)0x0;
  func_?();
code_?:
  uVar13 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar14 = (ArgumentNullException *)func_?(uVar13);
  func_?(pAVar14);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar14,pSVar12,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  uVar13 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar14 = (ArgumentNullException *)func_?(uVar13);
  func_?(pAVar14);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar14,(String *)pCStack_11,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* JsonValidatingReader(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader__ctor
               (JsonValidatingReader *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Stack__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>
                   );
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  paramName = StringLiteral_reader;
  if (reader == (JsonReader *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_01);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    func_?();
  }
  else {
    (this->fields)._reader = reader;
    func_?(&(this->fields)._reader,reader);
    this_00 = (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>
                             );
    if (this_00 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Stack__
                );
      (this->fields)._stack = this_00;
      func_?(&(this->fields)._stack,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void add_ValidationEventHandler(ValidationEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_add_ValidationEventHandler
               (JsonValidatingReader *this,ValidationEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).ValidationEventHandler;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ValidationEventHandler__Class *)pDVar1->klass ==
          TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pVVar4 = (ValidationEventHandler *)
             func_?(&(this->fields).ValidationEventHandler,pDVar2,a);
    bVar5 = pVVar4 == a;
    a = pVVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* IEnumerable`1[Newtonsoft.Json.Schema.JsonSchemaModel] get_CurrentMemberSchemas() */

IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
JsonValidatingReader_get_CurrentMemberSchemas(JsonValidatingReader *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2._0_1_ = 0xff;
  uStack_2._1_3_ = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff80;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Empty<Newtonsoft::Json::Schema::JsonSchemaModel>__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                   );
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  iStack_8 = 0;
  uStack_9 = 0;
  iStack_10 = 0;
  if ((this->fields)._currentScope == (JsonValidatingReader_SchemaScope *)0x0) {
    pSVar11 = (String *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel,1);
    pSVar12 = (String__Class *)(this->fields)._model;
    if (pSVar11 == (String *)0x0) goto code_?;
    if (pSVar12 == (String__Class *)0x0) {
code_?:
      bVar13 = 0;
      if (*(int *)&(pSVar11->fields)._firstChar == 0) goto code_?;
      pSVar11[1].klass = pSVar12;
      func_?(pSVar11 + 1,pSVar12);
      pLVar14 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                               );
      if (pLVar14 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (pLVar14,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           pSVar11,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                  );
code_?:
        *unaff_FS_OFFSET = uStack_4;
        return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pLVar14;
      }
      goto code_?;
    }
    iVar15 = func_?(pSVar12,(pSVar11->klass->_0).element_class);
    bVar13 = 0;
    if (iVar15 != 0) goto code_?;
  }
  else {
    pJVar16 = (this->fields)._currentScope;
    if (((pJVar16->fields)._schemas == (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) ||
       (iVar15 = func_?(0,
                                 TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 ,(pJVar16->fields)._schemas), iVar15 == 0)) {
code_?:
      pIVar17 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)
                func_?(
                               System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Empty<Newtonsoft::Json::Schema::JsonSchemaModel>__
                               );
      *unaff_FS_OFFSET = uStack_4;
      return pIVar17;
    }
    pJVar16 = (this->fields)._currentScope;
    if (pJVar16 == (JsonValidatingReader_SchemaScope *)0x0) {
code_?:
      uVar18 = func_?();
      func_?(uVar18);
code_?:
      uVar18 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar18);
      func_?(this_00);
      pMVar19 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_CurrentPropertyName_has_not_been);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar11,pMVar19);
      func_?(&
                      MethodInfo__Newtonsoft__Json__JsonValidatingReader__get_CurrentMemberSchemas__
                     );
      func_?();
      func_?();
    }
    else {
      switch((pJVar16->fields)._tokenType) {
      case 0:
        pIVar20 = (((this->fields)._currentScope)->fields)._schemas;
        *unaff_FS_OFFSET = uStack_4;
        return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pIVar20;
      case 1:
        if ((((this->fields)._currentScope)->fields)._CurrentPropertyName_k__BackingField !=
            (String *)0x0) {
          pLStack_21 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       func_?(
                                      TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                                      );
          if (pLStack_21 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)pLStack_21,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                      );
            pJVar16 = (this->fields)._currentScope;
            if ((pJVar16 != (JsonValidatingReader_SchemaScope *)0x0) &&
               (pIVar20 = (pJVar16->fields)._schemas,
               pIVar20 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
              iStack_8 = func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                          ,pIVar20);
              uStack_2._0_1_ = 1;
              uStack_2._1_3_ = 0;
              pLVar14 = pLStack_21;
              while (iStack_8 != 0) {
                cVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_8);
                if (cVar22 == '\0') {
                  uStack_2 = 0xffffffff;
                  if (iStack_8 != 0) {
                    func_?(0,TypeInfo__System__IDisposable,iStack_8);
                  }
                  goto code_?;
                }
                if ((iStack_8 == 0) ||
                   (iVar15 = func_?(0,
                                             TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                             ,iStack_8), iVar15 == 0)) break;
                if (*(int *)(iVar15 + 0x6c) != 0) {
                  pJVar16 = (this->fields)._currentScope;
                  if (pJVar16 == (JsonValidatingReader_SchemaScope *)0x0) break;
                  cVar22 = func_?(7,
                                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
                                          ,*(undefined4 *)(iVar15 + 0x6c),
                                          (pJVar16->fields)._CurrentPropertyName_k__BackingField,
                                          &uStack_9);
                  if (cVar22 != '\0') {
                    func_?(2,
                                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                    ,pLStack_21,uStack_9);
                  }
                }
                if (*(int *)(iVar15 + 0x70) != 0) {
                  iStack_10 = func_?(0,
                                              TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>
                                              ,*(undefined4 *)(iVar15 + 0x70));
                  uStack_2._0_1_ = 3;
                  while( true ) {
                    if (iStack_10 == 0) goto code_?;
                    cVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_10);
                    if (cVar22 == '\0') break;
                    if (iStack_10 == 0) goto code_?;
                    pSVar11 = (String *)
                              func_?(0,
                                              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>
                                              ,iStack_10);
                    pJVar16 = (this->fields)._currentScope;
                    if (pJVar16 == (JsonValidatingReader_SchemaScope *)0x0) goto code_?;
                    pSVar23 = (pJVar16->fields)._CurrentPropertyName_k__BackingField;
                    if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__System__Text__RegularExpressions__Regex);
                    }
                    bVar24 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                                      (pSVar23,pSVar11,(MethodInfo *)0x0);
                    if (bVar24 != 0) {
                      func_?(2);
                    }
                  }
                  uStack_2._0_1_ = 1;
                  func_?();
                  uStack_2._0_1_ = 1;
                }
                iVar25 = func_?(0,
                                         TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                         ,pLStack_21);
                pLVar14 = pLStack_21;
                if (((iVar25 == 0) && (*(char *)(iVar15 + 0x78) != '\0')) &&
                   (*(int *)(iVar15 + 0x74) != 0)) {
                  func_?(2,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pLStack_21,*(undefined4 *)(iVar15 + 0x74));
                }
              }
            }
          }
          goto code_?;
        }
        goto code_?;
      case 2:
        pLVar14 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>
                                 );
        pLStack_21 = pLVar14;
        if (pLVar14 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLVar14,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                    );
          pJVar16 = (this->fields)._currentScope;
          if ((pJVar16 != (JsonValidatingReader_SchemaScope *)0x0) &&
             (pIVar20 = (pJVar16->fields)._schemas,
             pIVar20 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0)) {
            iStack_8 = func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>
                                        ,pIVar20);
            uStack_2._1_3_ = 0;
            uStack_2._0_1_ = 7;
            while (iStack_8 != 0) {
              cVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_8);
              if (cVar22 == '\0') {
                uStack_2 = 0xffffffff;
                func_?();
                *unaff_FS_OFFSET = uStack_4;
                return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pLVar14;
              }
              if ((iStack_8 == 0) ||
                 (iVar15 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Schema::JsonSchemaModel>
                                           ,iStack_8), iVar15 == 0)) break;
              bVar24 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_1
                                (*(ICollection_1_System_Object_ **)(iVar15 + 0x68),
                                 bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>_
                                );
              if (bVar24 == 0) {
                if (*(int *)(iVar15 + 0x68) == 0) break;
                iVar25 = func_?(0,
                                         TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                         ,*(int *)(iVar15 + 0x68));
                if (iVar25 == 1) {
                  if (*(int *)(iVar15 + 0x68) == 0) break;
                  uVar18 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaModel>
                                           ,*(int *)(iVar15 + 0x68),0);
                  func_?(2,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pLStack_21,uVar18);
                }
                if (*(int *)(iVar15 + 0x68) == 0) break;
                iVar25 = func_?(0,
                                         TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                         ,*(int *)(iVar15 + 0x68));
                pJVar16 = (this->fields)._currentScope;
                if (pJVar16 == (JsonValidatingReader_SchemaScope *)0x0) break;
                if ((pJVar16->fields)._ArrayItemCount_k__BackingField + -1 < iVar25) {
                  if (*(int *)(iVar15 + 0x68) == 0) break;
                  uVar18 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaModel>
                                           ,*(int *)(iVar15 + 0x68),
                                           (((this->fields)._currentScope)->fields).
                                           _ArrayItemCount_k__BackingField + -1);
                  func_?(2,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                  ,pLStack_21,uVar18);
                }
              }
              pLVar14 = pLStack_21;
              if ((*(char *)(iVar15 + 0x78) != '\0') && (*(int *)(iVar15 + 0x74) != 0)) {
                func_?(2,
                                TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>
                                ,pLStack_21,*(undefined4 *)(iVar15 + 0x74));
              }
            }
          }
        }
        goto code_?;
      case 3:
        goto code_?;
      }
    }
    uVar18 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar18);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar18 = func_?(&TypeInfo__System__Object);
    args = (Object__Array *)func_?(uVar18);
    pJVar16 = (this->fields)._currentScope;
    func_?(pJVar16);
    mscorlib.dll::System::Tuple`3[Object,Object,Object]::Tuple_3_Object_Object_Object__get_Item1
              ((Tuple_3_Object_Object_Object_ *)pJVar16,(MethodInfo *)0x0);
    func_?();
    uVar18 = func_?();
    func_?();
    func_?(args,uVar18);
    func_?();
    pMVar19 = (MethodInfo *)0x0;
    pSVar11 = (String *)func_?(&StringLiteral_Unexpected_token_type___0_);
    pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar11,(IFormatProvider *)provider,args,pMVar19);
    uVar18 = func_?();
    this_01 = (ArgumentOutOfRangeException *)func_?(uVar18);
    func_?(this_01);
    pMVar19 = (MethodInfo *)0x0;
    pSVar23 = pSVar11;
    paramName = (String *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_01,paramName,pSVar23,pMVar19);
    func_?();
    bVar13 = (undefined1 *)0xffffffeb < &stack0xffffff90;
    func_?();
  }
  uVar18 = func_?(0);
  func_?(uVar18);
code_?:
  bVar26 = func_?();
  *(char *)&pSVar11->klass =
       *(char *)&pSVar11->klass + extraout_DH + (bVar26 < 3 || (byte)(bVar26 - 3) < bVar13);
  pcVar27 = (code *)swi(3);
  pIVar17 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)(*pcVar27)();
  return pIVar17;
}


/* IEnumerable`1[Newtonsoft.Json.Schema.JsonSchemaModel] get_CurrentSchemas() */

IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_CurrentSchemas
          (JsonValidatingReader *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pJVar2 = (this->fields)._currentScope;
  if (pJVar2 != (JsonValidatingReader_SchemaScope *)0x0) {
    return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)(pJVar2->fields)._schemas;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)(*pcVar5)();
  return pIVar6;
}


/* Char get_QuoteChar() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
         JsonValidatingReader_get_QuoteChar(JsonValidatingReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._reader;
  if (pJStack_2 != (JsonReader *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_QuoteChar.method;
    uVar3 = (*(pJStack_2->klass->vtable).get_QuoteChar.methodPtr)();
    return uVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  uVar3 = (*pcVar6)();
  return uVar3;
}


/* JsonToken get_TokenType() */

JsonToken__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_TokenType
          (JsonValidatingReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._reader;
  if (pJStack_2 != (JsonReader *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_TokenType.method;
    JVar3 = (*(pJStack_2->klass->vtable).get_TokenType.methodPtr)();
    return JVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  JVar3 = (*pcVar6)();
  return JVar3;
}


/* Type get_ValueType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
       JsonValidatingReader_get_ValueType(JsonValidatingReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._reader;
  if (pJStack_2 != (JsonReader *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ValueType.method;
    pTVar3 = (Type *)(*(pJStack_2->klass->vtable).get_ValueType.methodPtr)();
    return pTVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar6)();
  return pTVar3;
}


/* Void remove_ValidationEventHandler(ValidationEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_remove_ValidationEventHandler
               (JsonValidatingReader *this,ValidationEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).ValidationEventHandler;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ValidationEventHandler__Class *)pDVar1->klass ==
          TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pVVar4 = (ValidationEventHandler *)
             func_?(&(this->fields).ValidationEventHandler,pDVar2,source);
    bVar5 = pVVar4 == source;
    source = pVVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_Schema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_set_Schema
               (JsonValidatingReader *this,JsonSchema *value,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0) {
    (this->fields)._schema = value;
    func_?(&(this->fields)._schema,value);
    (this->fields)._model = (JsonSchemaModel *)0x0;
    func_?(&(this->fields)._model,0);
    return;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar2);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Cannot_change_schema_while_valid);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonValidatingReader__set_Schema_Newtonsoft__Json__Schema__JsonSchema_
                 );
  func_?(this_00);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

