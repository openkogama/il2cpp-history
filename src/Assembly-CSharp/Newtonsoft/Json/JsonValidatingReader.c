
/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] GetCurrentNodeSchemaType() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
JsonValidatingReader_GetCurrentNodeSchemaType(JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  cVar2 = '\0';
  if (pJVar1 != (JsonReader *)0x0) {
    iVar3 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    switch(iVar3) {
    case 7:
      uVar4 = 4;
      break;
    case 8:
      uVar4 = 2;
      break;
    case 9:
      uVar4 = 1;
      break;
    case 10:
      uVar4 = 8;
      break;
    case 0xb:
      uVar4 = 0x40;
      break;
    default:
      if (iVar3 == 1) {
        uVar4 = 0x10;
      }
      else {
        if (iVar3 != 2) {
          NVar5.value = 0;
          NVar5.has_value = 0;
          NVar5._5_3_ = 0;
          return NVar5;
        }
        uVar4 = 0x20;
      }
    }
    NStack_6.value = 0;
    NStack_6.has_value = 0;
    NStack_6._5_3_ = 0;
    func_?(&NStack_6,uVar4,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    return NStack_6;
  }
  func_?(0);
  *(char *)(unaff_EDI + -0x36efa9d5) =
       *(char *)(unaff_EDI + -0x36efa9d5) + (char)((uint)unaff_EBX >> 8) + cVar2;
  *unaff_EBX = *unaff_EBX >> (extraout_CL & 0x1f);
  pcVar7 = (code *)swi(3);
  NVar5 = (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)(*pcVar7)();
  return NVar5;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  if (schema != (JsonSchemaModel *)0x0) {
    pCVar5 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                       ((DesktopEditModeController *)schema,(MethodInfo *)0x0);
    if (pCVar5 != (ClientShopRepository *)0x0) {
      pCVar5 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                         ((DesktopEditModeController *)schema,(MethodInfo *)0x0);
      if (pCVar5 == (ClientShopRepository *)0x0) goto code_?;
      pCVar6 = pCVar5->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pCVar6->_1).rank;
      uVar8._1_1_ = (pCVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pCVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>
             ) {
            ppMVar9 = &(&(pCVar5->klass->vtable).Finalize)
                       [pCVar5->klass->interfaceOffsets[uVar7].offset].method;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      ppMVar9 = (MethodInfo **)func_?();
code_?:
      cVar10 = (*(code *)*ppMVar9)();
      if (cVar10 != '\0') {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    pOVar11 = ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
             ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)schema,
                        (MethodInfo *)0x0);
    if (pOVar11 != (Object *)0x0) {
      pOVar11 = ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
               ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)schema,
                          (MethodInfo *)0x0);
      if ((pOVar11 == (Object *)0x0) || (iVar12 = func_?(), iVar12 == 0))
      goto code_?;
      iVar12 = func_?();
      uStack_1 = 0;
      do {
        if (iVar12 == 0) goto code_?;
        cVar10 = func_?();
        if (cVar10 == '\0') {
          puVar13 = (undefined *)0x76;
          goto code_?;
        }
        pattern = (String *)func_?();
        if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
          func_?();
        }
        bVar14 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                          (propertyName,pattern,(MethodInfo *)0x0);
      } while (bVar14 == 0);
      bStack_4 = 1;
      puVar13 = (undefined *)0x78;
code_?:
      uStack_1 = 0xffffffff;
      if (iVar12 != 0) {
        puVar13 = &UNK_?;
        func_?();
      }
      if (puVar13 == (undefined *)0x78) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Boolean IsZero(Double) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_IsZero
               (double value,MethodInfo *method)

{
  return (double)CONCAT44((uint)((ulonglong)value >> 0x20) & _UNK_?,
                          SUB84(value,0) & _UNK_?) < _UNK_?;
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo
               (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 == 0) {
    return 0;
  }
  bVar2 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
  return bVar2;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
        JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber
                  (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
  return iVar2;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
        JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                  (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?((this->fields)._reader,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,iVar1);
  return iVar2;
}


/* Void OnValidationEvent(JsonSchemaException) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_OnValidationEvent
               (JsonValidatingReader *this,JsonSchemaException *exception,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).ValidationEventHandler;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    e = (InitializedGameQueryDataEventArgs *)
        func_?(TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs);
    Json::Schema::ValidationEventArgs::ValidationEventArgs__ctor
              ((ValidationEventArgs *)e,exception,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,e,(MethodInfo *)0x0);
    return;
  }
  func_?(exception,0,
                  MethodInfo__Newtonsoft__Json__JsonValidatingReader__OnValidationEvent_Newtonsoft__Json__Schema__JsonSchemaException_
                 );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JsonValidatingReader+SchemaScope Pop() */

JsonValidatingReader_SchemaScope *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Pop
          (JsonValidatingReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._stack;
  if (pSVar1 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
    pJVar2 = (JsonValidatingReader_SchemaScope *)
             System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
             Stack_1_ShortcutManager_ShortcutKey__Pop
                       ((Stack_1_ShortcutManager_ShortcutKey_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Pop__
                       );
    pSVar1 = (this->fields)._stack;
    if (pSVar1 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                          MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) {
        (this->fields)._currentScope = (JsonValidatingReader_SchemaScope *)0x0;
        return pJVar2;
      }
      pSVar1 = (this->fields)._stack;
      if (pSVar1 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
        pJVar4 = (JsonValidatingReader_SchemaScope *)
                 System.dll::System::Collections::Generic::Stack`1[System::Collections::IList]::
                 Stack_1_System_Collections_IList__Peek
                           ((Stack_1_System_Collections_IList_ *)pSVar1,
                            MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Peek__
                           );
        (this->fields)._currentScope = pJVar4;
        return pJVar2;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pJVar2 = (JsonValidatingReader_SchemaScope *)(*pcVar5)();
  return pJVar2;
}


/* Void ProcessValue() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ProcessValue
               (JsonValidatingReader *this,MethodInfo *method)

{
  pIVar1 = (Int32__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pJVar2 = (this->fields)._currentScope;
  if ((pJVar2 == (JsonValidatingReader_SchemaScope *)0x0) ||
     (pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pJVar2,(MethodInfo *)0x0),
     pIVar3 != (IList_1_VoxelHit_ *)0x2)) {
code_?:
    *unaff_FS_OFFSET = pIVar1;
    return;
  }
  pEVar4 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)(this->fields)._currentScope
  ;
  if (pEVar4 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) {
    iVar5 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      (pEVar4,(MethodInfo *)0x0);
    AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
              ((AccessoryPreviewPopup *)pEVar4,(MVBody *)(iVar5 + 1),(MethodInfo *)0x0);
    pJVar2 = (this->fields)._currentScope;
    if (pJVar2 != (JsonValidatingReader_SchemaScope *)0x0) {
      puVar6 = (undefined4 *)&UNK_?;
      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar2,
                          (MethodInfo *)0x0);
      if (pOVar7 != (Object *)0x0) {
        iVar8 = func_?();
        while (iVar8 != 0) {
          cVar9 = func_?();
          if (cVar9 == '\0') {
            *puVar6 = 0xd0;
            if (iVar8 != 0) {
              func_?();
            }
            goto code_?;
          }
          this_00 = (PrefabPool *)func_?();
          if (this_00 != (PrefabPool *)0x0) {
            puVar6 = (undefined4 *)0x0;
            pOVar10 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
            if (pOVar10 != (ObjectPrefab *)0x0) {
              puVar6 = (undefined4 *)&UNK_?;
              pOVar10 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
              if (pOVar10 == (ObjectPrefab *)0x0) break;
              iVar11 = func_?();
              if (1 < iVar11) {
                pEVar4 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                         (this->fields)._currentScope;
                if (pEVar4 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)
                break;
                iVar5 = System.Core.dll::System::Linq::
                        Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                  (pEVar4,(MethodInfo *)0x0);
                pOVar10 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
                if (pOVar10 == (ObjectPrefab *)0x0) break;
                pIVar1 = (Int32__Class *)&UNK_?;
                iVar11 = func_?();
                if (iVar11 <= iVar5) {
                  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                    func_?();
                  }
                  provider = mscorlib.dll::System::Globalization::CultureInfo::
                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                  args = (Object__Array *)func_?();
                  pEVar4 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                           (this->fields)._currentScope;
                  if (pEVar4 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)
                  break;
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            (pEVar4,(MethodInfo *)0x0);
                  pIVar1 = TypeInfo__System__Int32;
                  func_?();
                  if (args == (Object__Array *)0x0) break;
                  func_?();
                  iVar8 = 0;
                  func_?();
                  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                                      (StringLiteral_Index__0__has_not_been_defined_a,
                                       (IFormatProvider *)provider,args,(MethodInfo *)0x0);
                  puVar6 = (undefined4 *)0x0;
                  JsonValidatingReader_RaiseError
                            (this,message,(JsonSchemaModel *)this_00,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Push(JsonValidatingReader+SchemaScope) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Push
               (JsonValidatingReader *this,JsonValidatingReader_SchemaScope *scope,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._stack;
  if (this_00 != (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)0x0) {
    System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
    Stack_1_ShortcutManager_ShortcutKey__Push
              ((Stack_1_ShortcutManager_ShortcutKey_ *)this_00,(ShortcutManager_ShortcutKey *)scope,
               MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Push_Newtonsoft__Json__JsonValidatingReader__SchemaScope_
              );
    (this->fields)._currentScope = scope;
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this == (JsonValidatingReader *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    cVar2 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
    if (cVar2 == '\0') {
code_?:
      lineNumber = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
      linePosition = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
      this_01 = (JsonSchemaException *)
                func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaException);
      Json::Schema::JsonSchemaException::JsonSchemaException__ctor_4
                (this_01,message,(Exception *)0x0,lineNumber,linePosition,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      ex = TypeInfo__Newtonsoft__Json__Schema__ValidationEventArgs;
      this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                (this->fields).ValidationEventHandler;
      if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        e = (InitializedGameQueryDataEventArgs *)func_?();
        Json::Schema::ValidationEventArgs::ValidationEventArgs__ctor
                  ((ValidationEventArgs *)e,(JsonSchemaException *)ex,(MethodInfo *)0x0);
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  (this_00,(Object *)this,e,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar3 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar3,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,this);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    if ((pOVar3 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar3,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (1 < args->max_length) {
      args->vector[1] = pOVar3;
      str1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral__Line__0___position__1__,(IFormatProvider *)provider,args,
                        (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_2(message,str1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_Read
               (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    cVar2 = (*(code *)(pJVar1->klass->vtable).__unknown.method)
                      (pJVar1,(pJVar1->klass->vtable).__unknown_1.methodPtr);
    if (cVar2 == '\0') {
      return 0;
    }
    pJVar1 = (this->fields)._reader;
    if (pJVar1 != (JsonReader *)0x0) {
      iVar3 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                        (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
      if (iVar3 != 5) {
        JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
      }
      return 1;
    }
  }
  func_?(0);
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
             (*(code *)(pJVar1->klass->vtable).__unknown_1.method)
                       (pJVar1,(pJVar1->klass->vtable).__unknown_2.methodPtr);
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    return pBVar2;
  }
  func_?(0);
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
             (*(code *)(pJVar1->klass->vtable).__unknown_3.method)
                       (auStack_3,pJVar1,(pJVar1->klass->vtable).SetToken.methodPtr);
    uStack_4 = *puVar2;
    uStack_5 = puVar2[1];
    iStack_6 = puVar2[2];
    uStack_7 = puVar2[3];
    uStack_8 = puVar2[4];
    uStack_9 = puVar2[5];
    uStack_10 = puVar2[6];
    uStack_11 = puVar2[7];
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    *(undefined4 *)&(__return_storage_ptr__->value).dt.ticks._ticks = uStack_4;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = uStack_5;
    (__return_storage_ptr__->value).dt.kind = iStack_6;
    *(undefined4 *)&(__return_storage_ptr__->value).dt.field_0xc = uStack_7;
    *(undefined4 *)&(__return_storage_ptr__->value).utc_offset._ticks = uStack_8;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = uStack_9;
    *(undefined4 *)&__return_storage_ptr__->has_value = uStack_10;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_11;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  pNVar13 = (Nullable_1_DateTimeOffset_ *)(*pcVar12)();
  return pNVar13;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JsonValidatingReader *this,MethodInfo *method
          )

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    puVar2 = (uint32_t *)
             (*(code *)(pJVar1->klass->vtable).__unknown_2.method)
                       (auStack_3,pJVar1,(pJVar1->klass->vtable).__unknown_3.methodPtr);
    uStack_4 = *puVar2;
    uStack_5 = puVar2[1];
    uStack_6 = puVar2[2];
    uStack_7 = puVar2[3];
    uVar8 = puVar2[4];
    JsonValidatingReader_ValidateCurrentToken(this,(MethodInfo *)0x0);
    (__return_storage_ptr__->value).flags = uStack_4;
    (__return_storage_ptr__->value).hi = uStack_5;
    (__return_storage_ptr__->value).lo = uStack_6;
    (__return_storage_ptr__->value).mid = uStack_7;
    *(uint32_t *)&__return_storage_ptr__->has_value = uVar8;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pNVar10 = (Nullable_1_Decimal_ *)(*pcVar9)();
  return pNVar10;
}


/* Boolean TestType(JsonSchemaModel, JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_TestType
               (JsonValidatingReader *this,JsonSchemaModel *currentSchema,
               JsonSchemaType__Enum currentType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (currentSchema == (JsonSchemaModel *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)currentSchema,
                        (MethodInfo *)0x0);
    func_?(&stack0xfffffff0,pOVar2,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    bVar3 = Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_HasFlag_1
                      ((Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)0x0,currentType,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?();
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)currentSchema,
               (MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    pOVar2 = (Object *)
             func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaType,&stack0xfffffff8);
    if ((pOVar2 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 != 0)) {
      if (1 < args->max_length) {
        args->vector[1] = pOVar2;
        message = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Invalid_type__Expected__0__but_g,
                             (IFormatProvider *)provider,args,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,message,currentSchema,(MethodInfo *)0x0);
        return 0;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
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
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (ArgumentOutOfRangeException *)0x0;
  puVar2 = (undefined4 *)&stack0xffffffb8;
  func_?();
  puVar3 = (undefined4 *)&stack0xffffffb8;
  if ((this->fields)._model == (JsonSchemaModel *)0x0) {
    unaff_EDI = (JsonSchemaModelBuilder *)func_?();
    Json::Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder__ctor(unaff_EDI,(MethodInfo *)0x0);
    if (unaff_EDI != (JsonSchemaModelBuilder *)0x0) {
      pJVar4 = Json::Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder_Build
                         (unaff_EDI,(this->fields)._schema,(MethodInfo *)0x0);
      (this->fields)._model = pJVar4;
      puVar3 = puVar2;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  pJVar5 = (this->fields)._reader;
  if (pJVar5 == (JsonReader *)0x0) goto code_?;
  uVar6 = (*(code *)(pJVar5->klass->vtable).get_TokenType.method)();
  switch(uVar6) {
  case 1:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateObject_Newtonsoft__Json__Schema__JsonSchemaModel_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>__Func_System__Object__void__
              );
    pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pIVar7,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)pUVar8,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>_
                        );
    schemas = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)pIVar9,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                        );
    pJVar10 = (JsonValidatingReader_SchemaScope *)func_?();
    tokenType = JTokenType__Enum_Object;
    goto code_?;
  case 2:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__ValidateArray_Newtonsoft__Json__Schema__JsonSchemaModel_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>__Func_System__Object__void__
              );
    pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pIVar7,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)pUVar8,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Where<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_bool>_
                        );
    schemas = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)pIVar9,
                         System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__ToList<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                        );
    pJVar10 = (JsonValidatingReader_SchemaScope *)func_?();
    tokenType = JTokenType__Enum_Array;
code_?:
    JsonValidatingReader+SchemaScope::JsonValidatingReader_SchemaScope__ctor
              (pJVar10,tokenType,(IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)schemas,
               (MethodInfo *)0x0);
    uVar1 = 0;
    JsonValidatingReader_Push(this,pJVar10,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = uVar1;
    return;
  case 3:
    pJVar10 = (JsonValidatingReader_SchemaScope *)func_?();
    JsonValidatingReader+SchemaScope::JsonValidatingReader_SchemaScope__ctor
              (pJVar10,JTokenType__Enum_Constructor,
               (IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0,(MethodInfo *)0x0);
    JsonValidatingReader_Push(this,pJVar10,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uVar1;
    return;
  case 4:
    pIVar7 = JsonValidatingReader_get_CurrentSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x13b;
          if (iVar11 != 0) {
code_?:
            func_?();
          }
          goto code_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        JsonValidatingReader_ValidatePropertyName(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  default:
    this_00 = (ArgumentOutOfRangeException *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    cVar12 = (undefined1 *)0xfffffff3 < &stack0xffffffa4;
    goto code_?;
  case 6:
  case 0xc:
  case 0x10:
    goto code_?;
  case 7:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
code_?:
      unaff_EDI = (JsonSchemaModelBuilder *)0x0;
      if (iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 != '\0') goto code_?;
        *puVar3 = 0x18e;
joined_?:
        if (iVar11 == 0) goto code_?;
        goto code_?;
      }
      break;
    }
    break;
  case 8:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x1dc;
          goto joined_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        JsonValidatingReader_ValidateFloat(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 9:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x22a;
          goto joined_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        JsonValidatingReader_ValidateString(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 10:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x278;
          goto joined_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        if ((pJVar4 != (JsonSchemaModel *)0x0) &&
           (bVar13 = JsonValidatingReader_TestType
                              (this,pJVar4,JsonSchemaType__Enum_Boolean,(MethodInfo *)0x0),
           bVar13 != 0)) {
          JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,pJVar4,(MethodInfo *)0x0);
        }
      }
    }
    break;
  case 0xb:
    JsonValidatingReader_ProcessValue(this,(MethodInfo *)0x0);
    pIVar7 = JsonValidatingReader_get_CurrentMemberSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x2c6;
          goto joined_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        if ((pJVar4 != (JsonSchemaModel *)0x0) &&
           (bVar13 = JsonValidatingReader_TestType
                              (this,pJVar4,JsonSchemaType__Enum_Null,(MethodInfo *)0x0), bVar13 != 0)
           ) {
          JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,pJVar4,(MethodInfo *)0x0);
        }
      }
    }
    break;
  case 0xd:
    pIVar7 = JsonValidatingReader_get_CurrentSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x313;
joined_?:
          if (iVar11 != 0) {
            func_?();
          }
          goto code_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        JsonValidatingReader_ValidateEndObject(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 0xe:
    pIVar7 = JsonValidatingReader_get_CurrentSchemas(this,(MethodInfo *)0x0);
    if (pIVar7 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
      iVar11 = func_?();
      while (unaff_EDI = (JsonSchemaModelBuilder *)0x0, iVar11 != 0) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puVar3 = 0x362;
          goto joined_?;
        }
        pJVar4 = (JsonSchemaModel *)func_?();
        JsonValidatingReader_ValidateEndArray(this,pJVar4,(MethodInfo *)0x0);
      }
    }
    break;
  case 0xf:
code_?:
    JsonValidatingReader_Pop(this,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uVar1;
    return;
  }
code_?:
  cVar12 = '\0';
  func_?();
code_?:
  func_?();
  bVar14 = (byte)extraout_EDX;
  pcVar15 = (char *)CONCAT22((short)((uint)extraout_EDX >> 0x10),CONCAT11(0x3a,bVar14));
  bVar16 = (byte)((uint)this >> 8);
  *(byte *)&this_00->klass = *(char *)&this_00->klass + bVar16 + cVar12;
  *pcVar15 = *pcVar15 + (char)((ushort)extraout_CX >> 8);
  bVar17 = (byte)extraout_CX;
  pbVar18 = (byte *)((int)&unaff_EDI[0x316da6a].fields._nodeModels + 2);
  bVar19 = CARRY1(*pbVar18,bVar16) || CARRY1(*pbVar18 + bVar16,bVar17 < 0x56);
  *pbVar18 = *pbVar18 + bVar16 + (bVar17 < 0x56);
  pbVar18 = (byte *)((int)&this_00[1].klass + 2);
  bVar16 = *pbVar18;
  bVar20 = *pbVar18;
  *pbVar18 = bVar20 + bVar14 + bVar19;
  *(byte *)&unaff_EDI->klass =
       *(char *)&unaff_EDI->klass + bVar14 +
       (CARRY1(bVar16,bVar14) || CARRY1(bVar20 + bVar14,bVar19));
  *pcVar15 = *pcVar15 + extraout_AH + (9 < (bVar17 & 0xf) | in_AF);
  cVar12 = *(char *)&unaff_EDI->klass;
  *(char *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass >> 0x16;
  bVar19 = (cVar12 >> 0x15 & 1U) != 0;
  ppMVar21 = &this_00[1].monitor;
  bVar16 = *(byte *)ppMVar21;
  cVar12 = *(char *)ppMVar21;
  *(byte *)ppMVar21 = cVar12 + 0x3aU + bVar19;
  cRam_? = cRam_? + bVar14 + (0xc5 < bVar16 || CARRY1(cVar12 + 0x3aU,bVar19));
  pcVar22 = (code *)swi(3);
  (*pcVar22)(this_00,this_00,this_00,this_00,this_00);
  return;
code_?:
  pJVar4 = (JsonSchemaModel *)func_?();
  JsonValidatingReader_ValidateInteger(this,pJVar4,(MethodInfo *)0x0);
  goto code_?;
}


/* Void ValidateEndArray(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateEndArray
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  this_00 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
            (this->fields)._currentScope;
  if (this_00 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) {
    pCVar2 = (CultureInfo *)
             System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Int32]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                       (this_00,(MethodInfo *)0x0);
    Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MaximumItems(schema,(MethodInfo *)0x0);
    cVar3 = func_?(&stack0xffffffd8,MethodInfo__System__Nullable<int>__get_HasValue__);
    if (cVar3 == '\0') {
code_?:
      Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MinimumItems(schema,(MethodInfo *)0x0);
      cVar3 = func_?(&stack0xffffffd0);
      if (cVar3 == '\0') {
        return;
      }
      Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MinimumItems(schema,(MethodInfo *)0x0);
      cVar3 = func_?();
      if (cVar3 == '\0') {
        return;
      }
      iVar4 = func_?();
      if (iVar4 <= (int)pCVar2) {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCStack_5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?();
      pCStack_7 = pCVar2;
      pOVar8 = (Object *)func_?();
      if (pOVar6 == (Object__Array *)0x0) goto code_?;
      func_?(pOVar6,pOVar8);
      if (pOVar6->max_length != 0) {
        pOVar6->vector[0] = pOVar8;
        Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MinimumItems(schema,(MethodInfo *)0x0);
        pOVar8 = (Object *)func_?(TypeInfo__System__Nullable<int>,&stack0xffffffc8);
        func_?(pOVar6,pOVar8);
        if (1 < pOVar6->max_length) {
          pOVar6->vector[1] = pOVar8;
          pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Array_item_count__0__is_less_tha,
                              (IFormatProvider *)pCStack_5,pOVar6,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar9,schema,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    else {
      NStack_1 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MaximumItems
                            (schema,(MethodInfo *)0x0);
      cVar3 = func_?(&NStack_1);
      if ((cVar3 == '\0') || (iVar4 = func_?(&NStack_1), (int)pCVar2 <= iVar4))
      goto code_?;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCStack_7 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object);
      pCStack_10 = pCVar2;
      pCStack_5 = (CultureInfo *)func_?(TypeInfo__System__Int32,&pCStack_10);
      if (pOVar6 == (Object__Array *)0x0) goto code_?;
      func_?(pOVar6,pCStack_5);
      if (pOVar6->max_length == 0) {
        uVar11 = func_?(0);
        func_?(uVar11);
      }
      else {
        pOVar6->vector[0] = (Object *)pCStack_5;
        Json::Schema::JsonSchemaModel::JsonSchemaModel_get_MaximumItems(schema,(MethodInfo *)0x0);
        pCStack_5 = (CultureInfo *)func_?(TypeInfo__System__Nullable<int>,&stack0xffffffc8)
        ;
        func_?(pOVar6,pCStack_5);
        if (1 < pOVar6->max_length) {
          pOVar6->vector[1] = (Object *)pCStack_5;
          pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Array_item_count__0__exceeds_max,
                              (IFormatProvider *)pCStack_7,pOVar6,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar9,schema,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      uVar11 = func_?(0);
      func_?(uVar11);
    }
    uVar11 = func_?(0);
    func_?(uVar11);
  }
code_?:
  func_?(0);
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ValidateEndObject(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateEndObject
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  this_00 = (this->fields)._currentScope;
  if (this_00 != (JsonValidatingReader_SchemaScope *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    if (TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->__f__am_cache0 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_Boolean_ *)
        0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader___ValidateEndObject_m__0_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->__f__am_cache0 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_Boolean_ *
           )pUVar2;
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                       ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pOVar1,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                         *)TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->
                           __f__am_cache0,
                        System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_bool>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_bool>_
                       );
    if (TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->__f__am_cache1 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_String_ *)0x0
       ) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__JsonValidatingReader___ValidateEndObject_m__1_System__Collections__Generic__KeyValuePair<System::String,_bool>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->__f__am_cache1 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_System_Boolean_String_ *)
           pUVar2;
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                          ((IEnumerable_1_System_Object_ *)source,
                           (Func_2_Object_Single_ *)
                           TypeInfo__Newtonsoft__Json__JsonValidatingReader->static_fields->
                           __f__am_cache1,
                           System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_bool>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_bool>,_System::String>_
                          );
    this_01 = (List_1_VoxelHit_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source_00,
                         System__Collections__Generic__List<System::String>_MethodInfo__System__Linq__Enumerable__ToList<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                        );
    if (this_01 != (List_1_VoxelHit_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<System::String>__get_Count__
                         );
      if ((int)pOVar1 < 1) {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      args = (Object__Array *)func_?(provider,1);
      value = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                        (this_01,
                         MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Join
                         (::StringLiteral___,(String__Array *)value,(MethodInfo *)0x0);
      if (args != (Object__Array *)0x0) {
        func_?(args,pSVar3);
        if (args->max_length != 0) {
          args->vector[0] = (Object *)pSVar3;
          pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Required_properties_are_missing_,
                              (IFormatProvider *)provider,args,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar3,schema,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ValidateFloat(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_ValidateFloat
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  if ((schema != (JsonSchemaModel *)0x0) &&
     (bVar3 = JsonValidatingReader_TestType
                        (this,schema,JsonSchemaType__Enum_Float,(MethodInfo *)0x0), bVar3 != 0)) {
    JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
    pJVar4 = (this->fields)._reader;
    if (pJVar4 == (JsonReader *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    value = (Object *)(*(code *)(pJVar4->klass->vtable).get_Value.method)();
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                         (value,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
    LimbController::LimbController_get_InterpolateTowardsPitchRotation
              ((Quaternion *)&puStack_7,(LimbController *)schema,(MethodInfo *)0x0);
    bVar3 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff70,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar3 != 0) {
      pQVar8 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                         ((Quaternion *)&puStack_7,(LimbController *)schema,(MethodInfo *)0x0);
      pSStack_1 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar8->x;
      bVar3 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)&pSStack_1,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      if (bVar3 != 0) {
        fVar9 = (float10)func_?();
        if ((double)fVar9 < value_00) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar10 = (Object__Array *)func_?();
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?();
          }
          JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
          if (pOVar10 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar8 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                             ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
          puStack_7 = (undefined *)pQVar8->x;
          pOStack_12 = (Object__Array__Class *)pQVar8->y;
          func_?();
          func_?(pOVar10);
          func_?();
          pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Float__0__exceeds_maximum_value_,
                              (IFormatProvider *)pCVar6,pOVar10,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        }
      }
      bVar3 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMaximum
                        (schema,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        LimbController::LimbController_get_InterpolateTowardsPitchRotation
                  ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
        fVar9 = (float10)func_?();
        if (value_00 == (double)fVar9) {
          bVar3 = SubscribableVariableBase`1[System::Boolean]::
                  SubscribableVariableBase_1_System_Boolean__get_Value
                            ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffffa0,
                             MethodInfo__System__Nullable<double>__get_HasValue__);
          if (bVar3 != 0) {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            pOVar10 = (Object__Array *)func_?();
            if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
              func_?();
            }
            JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
            if (pOVar10 == (Object__Array *)0x0) goto code_?;
            func_?();
            func_?();
            pQVar8 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                               ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0
                               );
            puStack_7 = (undefined *)pQVar8->x;
            pOStack_12 = (Object__Array__Class *)pQVar8->y;
            func_?();
            func_?(pOVar10);
            func_?();
            pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                               (StringLiteral_Float__0__equals_maximum_value_o,
                                (IFormatProvider *)pCVar6,pOVar10,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
          }
        }
      }
    }
    LimbController::LimbController_get_InterpolateTowardsYawRotation
              ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
    bVar3 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff60,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar3 != 0) {
      LimbController::LimbController_get_InterpolateTowardsYawRotation
                ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
      bVar3 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff90,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      if (bVar3 != 0) {
        fVar9 = (float10)func_?();
        if (value_00 < (double)fVar9) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar10 = (Object__Array *)func_?();
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?();
          }
          JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
          if (pOVar10 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar8 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                             ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
          puStack_7 = (undefined *)pQVar8->x;
          pOStack_12 = (Object__Array__Class *)pQVar8->y;
          func_?();
          func_?(pOVar10);
          func_?();
          pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Float__0__is_less_than_minimum_v,
                              (IFormatProvider *)pCVar6,pOVar10,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
        }
      }
      bVar3 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMinimum
                        (schema,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pQVar8 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                           ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0);
        pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar8->x;
        fVar9 = (float10)func_?();
        if (value_00 == (double)fVar9) {
          bVar3 = SubscribableVariableBase`1[System::Boolean]::
                  SubscribableVariableBase_1_System_Boolean__get_Value
                            ((SubscribableVariableBase_1_System_Boolean_ *)&pSStack_2,
                             MethodInfo__System__Nullable<double>__get_HasValue__);
          if (bVar3 != 0) {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            pOVar10 = (Object__Array *)func_?();
            if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
              func_?();
            }
            JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
            if (pOVar10 == (Object__Array *)0x0) goto code_?;
            func_?();
            func_?();
            pQVar8 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                               ((Quaternion *)&puStack_11,(LimbController *)schema,(MethodInfo *)0x0
                               );
            puStack_7 = (undefined *)pQVar8->x;
            pOStack_12 = (Object__Array__Class *)pQVar8->y;
            func_?();
            func_?(pOVar10);
            func_?();
            pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                               (StringLiteral_Float__0__equals_minimum_value_o,
                                (IFormatProvider *)pCVar6,pOVar10,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
          }
        }
      }
    }
    Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
              ((Nullable_1_Double_ *)&puStack_11,schema,(MethodInfo *)0x0);
    bVar3 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff50,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar3 != 0) {
      Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                ((Nullable_1_Double_ *)&puStack_11,schema,(MethodInfo *)0x0);
      func_?();
      fVar9 = (float10)func_?();
      if (_UNK_? <=
          (double)CONCAT44((uint)((ulonglong)(double)fVar9 >> 0x20) & _UNK_?,
                           SUB84((double)fVar9,0) & _UNK_?)) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pOStack_12 = TypeInfo__System__Object;
        pOVar10 = (Object__Array *)func_?();
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?();
        }
        JsonConvert::JsonConvert_ToString_12(value_00,(MethodInfo *)0x0);
        if (pOVar10 == (Object__Array *)0x0) goto code_?;
        func_?();
        func_?();
        pNVar14 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                           ((Nullable_1_Double_ *)&puStack_11,schema,(MethodInfo *)0x0);
        puStack_7 = *(undefined **)&pNVar14->value;
        pOStack_12 = *(Object__Array__Class **)((int)&pNVar14->value + 4);
        func_?();
        func_?(pOVar10);
        func_?();
        pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                           (StringLiteral_Float__0__is_not_evenly_divisibl,(IFormatProvider *)pCVar6
                            ,pOVar10,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar13,schema,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void ValidateInEnumAndNotDisallowed(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateInEnumAndNotDisallowed
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  this_00 = schema;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSStack_1 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar3 = (this->fields)._reader;
  this_01 = schema;
  if (pJVar3 == (JsonReader *)0x0) goto code_?;
  pOVar4 = (Object *)(*(code *)(pJVar3->klass->vtable).get_Value.method)();
  this_01 = (JsonSchemaModel *)func_?();
  Json::Linq::JValue::JValue__ctor_11((JValue *)this_01,pOVar4,(MethodInfo *)0x0);
  pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                      ((DayNightCycle *)schema,(MethodInfo *)0x0);
  if (pSVar5 == (SkyParam *)0x0) {
code_?:
    schema = this_01;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pJVar3 = (this->fields)._reader;
    this_01 = schema;
    if (pJVar3 == (JsonReader *)0x0) {
code_?:
      schema = this_01;
      func_?();
      this_01 = schema;
      goto code_?;
    }
    iVar6 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)();
    switch(iVar6) {
    case 7:
      uStack_7 = 0;
      func_?();
      pSStack_8 = (SubscribableVariableBase_1_System_Boolean___Class *)uStack_7;
      pSVar9 = uStack_7._4_4_;
      break;
    case 8:
      pSStack_10 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      pSStack_11 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      func_?();
      pSStack_8 = pSStack_10;
      pSVar9 = pSStack_11;
      break;
    case 9:
      uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      pSStack_13 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      func_?();
      pSStack_8 = uStack_12._4_4_;
      pSVar9 = pSStack_13;
      break;
    case 10:
      pSStack_14 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      uStack_12._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
      func_?();
      pSStack_8 = pSStack_14;
      pSVar9 = (SubscribableVariableBase_1_System_Boolean___Class *)uStack_12;
      break;
    case 0xb:
      auStack_15 = (undefined1  [8])0x0;
      func_?();
      pSStack_8 = (SubscribableVariableBase_1_System_Boolean___Class *)auStack_15._0_4_;
      pSVar9 = (SubscribableVariableBase_1_System_Boolean___Class *)auStack_15._4_4_;
      break;
    default:
      if (iVar6 == 1) {
        pSStack_16 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
        stack0xffffffc8 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
        func_?();
        pSStack_8 = pSStack_16;
        pSVar9 = stack0xffffffc8;
      }
      else {
        pSStack_8 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
        pSStack_17 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
        pSVar9 = pSStack_17;
        if (iVar6 == 2) {
          func_?();
          pSVar9 = pSStack_17;
        }
      }
    }
    pSStack_1 = pSStack_8;
    pSStack_2 = pSVar9;
    cVar18 = func_?();
    if (cVar18 == '\0') {
      return;
    }
    DayNightCycle::DayNightCycle_get_CurrentStarsParam((DayNightCycle *)this_00,(MethodInfo *)0x0);
    pSStack_17 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
    func_?();
    flag = func_?();
    bVar19 = Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_HasFlag_1
                      ((Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)
                       (ZEXT48(pSStack_17) << 0x20),flag,(MethodInfo *)0x0);
    if (bVar19 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      stack0xffffffc8 =
           (SubscribableVariableBase_1_System_Boolean___Class *)
           TypeInfo__System__Globalization__CultureInfo;
      func_?();
    }
    pSStack_16 = (SubscribableVariableBase_1_System_Boolean___Class *)0xADDR;
    stack0xffffffc8 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
    pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    stack0xffffffc8 = (SubscribableVariableBase_1_System_Boolean___Class *)0x1;
    pSStack_16 = (SubscribableVariableBase_1_System_Boolean___Class *)TypeInfo__System__Object;
    uStack_7 = CONCAT44(pCVar20,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7);
    pOVar21 = (Object__Array *)func_?();
    pSStack_17 = pSStack_2;
    schema = (JsonSchemaModel *)func_?();
    this_01 = schema;
    if (pOVar21 == (Object__Array *)0x0) goto code_?;
    func_?();
    if (pOVar21->max_length != 0) {
      pOVar21->vector[0] = (Object *)schema;
      pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Type__0__is_disallowed_,(IFormatProvider *)uStack_7._4_4_,
                           pOVar21,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar22,this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    this_02 = (StringWriter *)func_?();
    uStack_7 = CONCAT44(this_02,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7);
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (this_02,(IFormatProvider *)pCVar20,(MethodInfo *)0x0);
    this_03 = (JsonTextWriter *)func_?();
    JsonTextWriter::JsonTextWriter__ctor(this_03,(TextWriter *)this_02,(MethodInfo *)0x0);
    func_?();
    if (this_01 == (JsonSchemaModel *)0x0) goto code_?;
    (*(code *)(((JValue__Class *)this_01->klass)->vtable).WriteTo.method)();
    pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)schema,(MethodInfo *)0x0);
    this_04 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_04,(MethodInfo *)0x0);
    bVar19 = Json::Utilities::CollectionUtils::CollectionUtils_ContainsValue_1
                      ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pSVar5,(JToken *)this_01,
                       (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)this_04,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__ContainsValue<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                      );
    if (bVar19 != 0) goto code_?;
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = (JsonSchemaModel *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar21 = (Object__Array *)func_?();
    if ((uStack_7._4_4_ == (SubscribableVariableBase_1_System_Boolean___Class *)0x0) ||
       (pOVar4 = (Object *)(**(code **)(*(int *)uStack_7._4_4_ + 0xd8))(),
       pOVar21 == (Object__Array *)0x0)) goto code_?;
    func_?();
    if (pOVar21->max_length != 0) {
      pOVar21->vector[0] = pOVar4;
      pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Value__0__is_not_defined_in_enum,(IFormatProvider *)this_01
                           ,pOVar21,(MethodInfo *)0x0);
      JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    schema = this_01;
    func_?();
    func_?();
  }
  func_?();
  cVar18 = func_?();
  uVar23 = extraout_EDX ^ *(uint *)(extraout_ECX + 0x56);
  pbVar24 = (byte *)(uVar23 + 0x51);
  bVar25 = *pbVar24;
  *pbVar24 = *pbVar24 + (byte)this_00;
  *(char *)(extraout_ECX + -0x57efa9af) =
       *(char *)(extraout_ECX + -0x57efa9af) + cVar18 + CARRY1(bVar25,(byte)this_00);
  in((short)uVar23);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_26._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  auStack_26._4_4_ = (MonitorData *)0x0;
  fStack_27 = 0.0;
  pAStack_28 = (Action_1_Boolean_ *)0x0;
  auStack_29._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  auStack_29._4_4_ = (MonitorData *)0x0;
  fStack_30 = 0.0;
  pAStack_31 = (Action_1_Boolean_ *)0x0;
  pSStack_32 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  SStack_33.klass = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  SStack_33.monitor = (MonitorData *)0x0;
  SStack_33.fields.value = 0;
  SStack_33.fields._1_3_ = 0;
  SStack_33.fields.OnChange = (Action_1_Boolean_ *)0x0;
  if ((schema != (JsonSchemaModel *)0x0) &&
     (bVar19 = JsonValidatingReader_TestType
                        (this,schema,JsonSchemaType__Enum_Integer,(MethodInfo *)0x0), bVar19 != 0)) {
    JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) {
code_?:
      func_?(0);
      pcVar34 = (code *)swi(3);
      (*pcVar34)();
      return;
    }
    pOVar4 = (Object *)
              (*(code *)(pJVar3->klass->vtable).get_Value.method)
                        (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    iVar35 = mscorlib.dll::System::Convert::Convert_ToInt64_17
                       (pOVar4,(IFormatProvider *)pCVar20,(MethodInfo *)0x0);
    uVar36 = (undefined4)((ulonglong)iVar35 >> 0x20);
    pSStack_11 = (SubscribableVariableBase_1_System_Boolean___Class *)iVar35;
    pQVar37 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                        ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
    auStack_26._0_4_ = pQVar37->x;
    auStack_26._4_4_ = pQVar37->y;
    fStack_27 = pQVar37->z;
    pAStack_28 = (Action_1_Boolean_ *)pQVar37->w;
    bVar19 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)auStack_26,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar19 != 0) {
      pQVar37 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                          ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
      pSVar9 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->x;
      pSVar38 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
      func_?();
      pSStack_13 = pSVar9;
      pSStack_10 = pSVar38;
      bVar19 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffffa0,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      if (bVar19 != 0) {
        pSStack_1 = pSStack_13;
        pSStack_2 = pSStack_10;
        fVar39 = (float10)func_?(&stack0xffffffa0,
                                          MethodInfo__System__Nullable<double>__GetValueOrDefault__)
        ;
        dVar40 = (double)CONCAT44(pSStack_10,pSStack_13);
        uStack_12 = (double)fVar39;
        pSStack_13 = pSStack_1;
        pSStack_10 = pSStack_2;
        if (uStack_12 < dVar40) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pSStack_13 = pSStack_1;
          pSStack_10 = pSStack_2;
          pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)
                       mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          iVar6 = func_?(TypeInfo__System__Object,2);
          uStack_7._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)iVar6;
          uVar41 = func_?(TypeInfo__System__Int64,&stack0xffffffb8);
          uStack_7 = CONCAT44(uStack_7._4_4_,uVar41);
          if (uStack_7._4_4_ == (SubscribableVariableBase_1_System_Boolean___Class *)0x0)
          goto code_?;
          func_?(uStack_7._4_4_,uVar41);
          func_?(0,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7);
          pQVar37 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                              ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0)
          ;
          pSStack_14 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
          uStack_12._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->z;
          uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->w;
          auStack_15._4_4_ = pQVar37->x;
          uVar41 = func_?(TypeInfo__System__Nullable<double>,auStack_15 + 4);
          func_?(uStack_7._4_4_,uVar41);
          pOVar21 = (Object__Array *)uStack_7._4_4_;
          func_?(1,uVar41);
          pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_Integer__0__exceeds_maximum_valu,
                               (IFormatProvider *)pSStack_2,pOVar21,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
        }
      }
      bVar19 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMaximum
                        (schema,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        LimbController::LimbController_get_InterpolateTowardsPitchRotation
                  ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
        fVar39 = (float10)func_?(&stack0xffffff90,
                                          MethodInfo__System__Nullable<double>__GetValueOrDefault__)
        ;
        uStack_12 = (double)fVar39;
        if ((double)CONCAT44(pSStack_10,pSStack_13) == uStack_12) {
          bVar19 = SubscribableVariableBase`1[System::Boolean]::
                  SubscribableVariableBase_1_System_Boolean__get_Value
                            ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff90,
                             MethodInfo__System__Nullable<double>__get_HasValue__);
          if (bVar19 != 0) {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uStack_7 = CONCAT44(uStack_7._4_4_,pCVar20);
            uVar41 = func_?(TypeInfo__System__Object,2);
            uStack_7 = CONCAT44(uVar41,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7
                               );
            pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)
                         func_?(TypeInfo__System__Int64,&stack0xffffffb8);
            if (uStack_7._4_4_ == (SubscribableVariableBase_1_System_Boolean___Class *)0x0)
            goto code_?;
            func_?(uStack_7._4_4_,pSStack_2);
            func_?(0,pSStack_2);
            pQVar37 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                                ((Quaternion *)&pSStack_17,(LimbController *)schema,
                                 (MethodInfo *)0x0);
            pSStack_14 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
            uStack_12._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->z;
            uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->w;
            auStack_15._4_4_ = pQVar37->x;
            uVar41 = func_?(TypeInfo__System__Nullable<double>,auStack_15 + 4);
            func_?(uStack_7._4_4_,uVar41);
            pOVar21 = (Object__Array *)uStack_7._4_4_;
            func_?(1,uVar41);
            pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                (StringLiteral_Integer__0__equals_maximum_value,
                                 (IFormatProvider *)
                                 (SubscribableVariableBase_1_System_Boolean___Class *)uStack_7,
                                 pOVar21,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
          }
        }
      }
    }
    pQVar37 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                        ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
    auStack_29._0_4_ = pQVar37->x;
    auStack_29._4_4_ = pQVar37->y;
    fStack_30 = pQVar37->z;
    pAStack_31 = (Action_1_Boolean_ *)pQVar37->w;
    bVar19 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)auStack_29,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar19 != 0) {
      pQVar37 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                          ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
      pSVar42 = pSStack_11;
      pSVar9 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->x;
      pSVar38 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
      pSStack_32 = pSVar9;
      func_?();
      pSStack_13 = pSVar9;
      pSStack_10 = pSVar38;
      bVar19 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)&pSStack_32,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      pSVar9 = pSStack_10;
      pSStack_10 = pSVar9;
      if (bVar19 != 0) {
        pSVar38 = pSStack_13;
        fVar39 = (float10)func_?(&pSStack_32,
                                          MethodInfo__System__Nullable<double>__GetValueOrDefault__)
        ;
        uStack_12 = (double)fVar39;
        dVar40 = (double)CONCAT44(pSStack_10,pSStack_13);
        dVar43 = (double)CONCAT44(pSStack_10,pSStack_13);
        pSStack_13 = pSVar38;
        pSStack_10 = pSVar9;
        if (dVar43 <= uStack_12 && uStack_12 != dVar40) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pSStack_13 = pSVar38;
          pSStack_10 = pSVar9;
          pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uStack_7 = CONCAT44(uStack_7._4_4_,pCVar20);
          uVar41 = func_?(TypeInfo__System__Object,2);
          uStack_7 = CONCAT44(uVar41,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7);
          uStack_12._0_4_ = pSVar42;
          uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)uVar36;
          pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)
                       func_?(TypeInfo__System__Int64,&uStack_12);
          if (uStack_7._4_4_ == (SubscribableVariableBase_1_System_Boolean___Class *)0x0)
          goto code_?;
          func_?(uStack_7._4_4_,pSStack_2);
          func_?(0,pSStack_2);
          pQVar37 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                              ((Quaternion *)&stack0xffffffb0,(LimbController *)schema,
                               (MethodInfo *)0x0);
          pSStack_17 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->x;
          pSStack_16 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
          unique0x1000187b = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->z;
          auStack_15._0_4_ = pQVar37->w;
          uVar41 = func_?(TypeInfo__System__Nullable<double>,&pSStack_17);
          func_?(uStack_7._4_4_,uVar41);
          pOVar21 = (Object__Array *)uStack_7._4_4_;
          func_?(1,uVar41);
          pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_Integer__0__is_less_than_minimum,
                               (IFormatProvider *)
                               (SubscribableVariableBase_1_System_Boolean___Class *)uStack_7,pOVar21
                               ,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
        }
      }
      bVar19 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMinimum
                        (schema,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        LimbController::LimbController_get_InterpolateTowardsYawRotation
                  ((Quaternion *)&pSStack_17,(LimbController *)schema,(MethodInfo *)0x0);
        fVar39 = (float10)func_?(&stack0xffffff70,
                                          MethodInfo__System__Nullable<double>__GetValueOrDefault__)
        ;
        uStack_12 = (double)fVar39;
        if ((double)CONCAT44(pSStack_10,pSStack_13) == uStack_12) {
          bVar19 = SubscribableVariableBase`1[System::Boolean]::
                  SubscribableVariableBase_1_System_Boolean__get_Value
                            ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff70,
                             MethodInfo__System__Nullable<double>__get_HasValue__);
          if (bVar19 != 0) {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar20 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uStack_7 = CONCAT44(uStack_7._4_4_,pCVar20);
            iVar6 = func_?(TypeInfo__System__Object,2);
            uStack_12._0_4_ = pSStack_11;
            uStack_7 = CONCAT44(iVar6,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7
                               );
            uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)uVar36;
            pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)
                         func_?(TypeInfo__System__Int64,&uStack_12);
            if (iVar6 == 0) goto code_?;
            func_?(iVar6,pSStack_2);
            func_?(0,pSStack_2);
            pQVar37 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                                ((Quaternion *)&stack0xffffffb0,(LimbController *)schema,
                                 (MethodInfo *)0x0);
            pSStack_17 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->x;
            pSStack_16 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->y;
            unique0x10001893 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar37->z;
            auStack_15._0_4_ = pQVar37->w;
            uVar41 = func_?(TypeInfo__System__Nullable<double>,&pSStack_17);
            func_?(uStack_7._4_4_,uVar41);
            pOVar21 = (Object__Array *)uStack_7._4_4_;
            func_?(1,uVar41);
            pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                (StringLiteral_Integer__0__equals_minimum_value,
                                 (IFormatProvider *)
                                 (SubscribableVariableBase_1_System_Boolean___Class *)uStack_7,
                                 pOVar21,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
          }
        }
      }
    }
    pNVar44 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                        ((Nullable_1_Double_ *)&pSStack_17,schema,(MethodInfo *)0x0);
    SStack_33.klass = *(SubscribableVariableBase_1_System_Boolean___Class **)&pNVar44->value;
    SStack_33.monitor = *(MonitorData **)((int)&pNVar44->value + 4);
    SStack_33.fields.value = pNVar44->has_value;
    SStack_33.fields._1_3_ = *(undefined3 *)&pNVar44->field_0x9;
    SStack_33.fields.OnChange = *(Action_1_Boolean_ **)&pNVar44->field_0xc;
    bVar19 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      (&SStack_33,MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar19 != 0) {
      pNVar44 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                          ((Nullable_1_Double_ *)&pSStack_17,schema,(MethodInfo *)0x0);
      uVar41 = *(undefined4 *)&pNVar44->value;
      uVar45 = *(undefined4 *)((int)&pNVar44->value + 4);
      func_?();
      uStack_12._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)uVar41;
      uStack_12._4_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)uVar45;
      func_?(&stack0xffffff30);
      fVar39 = (float10)func_?();
      dVar40 = (double)fVar39;
      uStack_12._0_4_ = SUB84(dVar40,0);
      uStack_12._4_4_ =
           (SubscribableVariableBase_1_System_Boolean___Class *)((ulonglong)dVar40 >> 0x20);
      if (_UNK_? <=
          (double)CONCAT44((uint)uStack_12._4_4_ & _UNK_?,
                           (uint)(SubscribableVariableBase_1_System_Boolean___Class *)uStack_12 &
                           _UNK_?)) {
        uStack_12 = dVar40;
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pSStack_2 = (SubscribableVariableBase_1_System_Boolean___Class *)
                     mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        iVar6 = func_?(TypeInfo__System__Object);
        uStack_7 = CONCAT44(iVar6,(SubscribableVariableBase_1_System_Boolean___Class *)uStack_7);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar22 = JsonConvert::JsonConvert_ToString_9(CONCAT44(uVar36,pSStack_11),(MethodInfo *)0x0)
        ;
        if (iVar6 == 0) goto code_?;
        func_?(iVar6,pSVar22);
        func_?(0,pSVar22);
        pNVar44 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                            ((Nullable_1_Double_ *)(auStack_15 + 4),schema,(MethodInfo *)0x0);
        pSStack_17 = *(SubscribableVariableBase_1_System_Boolean___Class **)&pNVar44->value;
        _pSStack_3c = *(undefined8 *)((int)&pNVar44->value + 4);
        auStack_15._0_4_ = *(undefined4 *)&pNVar44->field_0xc;
        uVar36 = func_?(TypeInfo__System__Nullable<double>,&pSStack_17);
        func_?(uStack_7._4_4_,uVar36);
        pOVar21 = (Object__Array *)uStack_7._4_4_;
        func_?(1,uVar36);
        pSVar22 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Integer__0__is_not_evenly_divisi,
                             (IFormatProvider *)pSStack_2,pOVar21,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar22,schema,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void ValidateInteger(JsonSchemaModel) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_ValidateInteger
               (JsonValidatingReader *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  fStack_2 = 0.0;
  pAStack_3 = (Action_1_Boolean_ *)0x0;
  pSStack_4 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  pOStack_5 = (Object__Array__Class *)0x0;
  pSStack_6 = (SubscribableVariableBase_1_System_Boolean___Class *)0x0;
  if ((schema != (JsonSchemaModel *)0x0) &&
     (bVar7 = JsonValidatingReader_TestType
                        (this,schema,JsonSchemaType__Enum_Integer,(MethodInfo *)0x0), bVar7 != 0)) {
    JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
    pJVar8 = (this->fields)._reader;
    if (pJVar8 == (JsonReader *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    value = (Object *)(*(code *)(pJVar8->klass->vtable).get_Value.method)();
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    dVar11 = (double)mscorlib.dll::System::Convert::Convert_ToInt64_17
                               (value,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
    uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
    uVar13 = SUB84(dVar11,0);
    uStack_14 = uVar13;
    LimbController::LimbController_get_InterpolateTowardsPitchRotation
              (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
    bVar7 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff60,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar7 != 0) {
      pQVar16 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                         (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
      pSVar17 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar16->x;
      pMVar18 = (MonitorData *)pQVar16->y;
      fStack_2 = pQVar16->z;
      pAStack_3 = (Action_1_Boolean_ *)pQVar16->w;
      auStack_1._0_4_ = pSVar17;
      auStack_1._4_4_ = pMVar18;
      func_?();
      dStack_19 = (double)CONCAT44(pMVar18,pSVar17);
      bVar7 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)auStack_1,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      if (bVar7 != 0) {
        uStack_20 = dStack_19;
        fVar21 = (float10)func_?();
        dVar22 = dStack_19;
        uStack_23 = (double)fVar21;
        uVar24 = SUB84(uStack_20,0);
        uVar25 = (undefined4)((ulonglong)uStack_20 >> 0x20);
        dStack_19 = uStack_20;
        if (uStack_23 < dVar22) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
            uVar24 = SUB84(uStack_20,0);
            uVar25 = (undefined4)((ulonglong)uStack_20 >> 0x20);
          }
          dStack_19 = (double)CONCAT44(uVar25,uVar24);
          pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uStack_20 = (double)CONCAT44(pCVar10,(undefined4)uStack_20);
          pOStack_26 = (Object__Array *)func_?();
          unique0x10001422 = dVar11;
          pCStack_27 = (CultureInfo *)func_?();
          if (pOStack_26 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar16 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                             (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
          fStack_28 = pQVar16->x;
          fStack_29 = pQVar16->y;
          uStack_23 = *(double *)&pQVar16->z;
          func_?();
          func_?(pOStack_26);
          pOVar30 = pOStack_26;
          func_?();
          pSVar31 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Integer__0__exceeds_maximum_valu,uStack_20._4_4_,pOVar30,
                              (MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar31,schema,(MethodInfo *)0x0);
          uVar13 = uStack_14;
        }
      }
      bVar7 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMaximum
                        (schema,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pQVar16 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                           (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
        pSStack_4 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar16->x;
        pOStack_5 = (Object__Array__Class *)pQVar16->y;
        fVar21 = (float10)func_?();
        uStack_23 = (double)fVar21;
        if ((dStack_19 == uStack_23) &&
           (bVar7 = SubscribableVariableBase`1[System::Boolean]::
                    SubscribableVariableBase_1_System_Boolean__get_Value
                              ((SubscribableVariableBase_1_System_Boolean_ *)&pSStack_4,
                               MethodInfo__System__Nullable<double>__get_HasValue__), bVar7 != 0)) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCStack_27 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOStack_26 = (Object__Array *)func_?();
          stack0xffffffb8 = (double)CONCAT44(uVar12,uVar13);
          uVar13 = func_?();
          uStack_20 = (double)CONCAT44(uVar13,(undefined4)uStack_20);
          if (pOStack_26 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar16 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                             (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
          fStack_28 = pQVar16->x;
          fStack_29 = pQVar16->y;
          uStack_23 = *(double *)&pQVar16->z;
          func_?();
          func_?(pOStack_26);
          pOVar30 = pOStack_26;
          func_?();
          pSVar31 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Integer__0__equals_maximum_value,
                              (IFormatProvider *)pCStack_27,pOVar30,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar31,schema,(MethodInfo *)0x0);
        }
      }
    }
    LimbController::LimbController_get_InterpolateTowardsYawRotation
              (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
    bVar7 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff50,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar7 != 0) {
      pQVar16 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                         (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
      uVar13 = uStack_14;
      pSVar17 = (SubscribableVariableBase_1_System_Boolean___Class *)pQVar16->x;
      fVar32 = pQVar16->y;
      pSStack_6 = pSVar17;
      func_?();
      dStack_19 = (double)CONCAT44(fVar32,pSVar17);
      bVar7 = SubscribableVariableBase`1[System::Boolean]::
              SubscribableVariableBase_1_System_Boolean__get_Value
                        ((SubscribableVariableBase_1_System_Boolean_ *)&pSStack_6,
                         MethodInfo__System__Nullable<double>__get_HasValue__);
      if (bVar7 != 0) {
        stack0xffffffb8 = dStack_19;
        fVar21 = (float10)func_?();
        dVar11 = dStack_19;
        uStack_23 = (double)fVar21;
        uVar24 = SUB84(stack0xffffffb8,0);
        uVar25 = (undefined4)((ulonglong)stack0xffffffb8 >> 0x20);
        dStack_19 = stack0xffffffb8;
        if (dVar11 < uStack_23) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
            uVar24 = SUB84(stack0xffffffb8,0);
            uVar25 = (undefined4)((ulonglong)stack0xffffffb8 >> 0x20);
          }
          dStack_19 = (double)CONCAT44(uVar25,uVar24);
          pCStack_27 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOStack_26 = (Object__Array *)func_?();
          uStack_23 = (double)CONCAT44(uVar12,uVar13);
          uVar13 = func_?();
          uStack_20 = (double)CONCAT44(uVar13,(undefined4)uStack_20);
          if (pOStack_26 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar16 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                             ((Quaternion *)auStack_33,(LimbController *)schema,(MethodInfo *)0x0);
          QStack_15.x = pQVar16->x;
          QStack_15.y = pQVar16->y;
          QStack_15.z = pQVar16->z;
          QStack_15.w = pQVar16->w;
          func_?();
          func_?(pOStack_26);
          pOVar30 = pOStack_26;
          func_?();
          pSVar31 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Integer__0__is_less_than_minimum,
                              (IFormatProvider *)pCStack_27,pOVar30,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar31,schema,(MethodInfo *)0x0);
        }
      }
      bVar7 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_ExclusiveMinimum
                        (schema,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        LimbController::LimbController_get_InterpolateTowardsYawRotation
                  (&QStack_15,(LimbController *)schema,(MethodInfo *)0x0);
        fVar21 = (float10)func_?();
        uStack_23 = (double)fVar21;
        if ((dStack_19 == uStack_23) &&
           (bVar7 = SubscribableVariableBase`1[System::Boolean]::
                    SubscribableVariableBase_1_System_Boolean__get_Value
                              ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff70,
                               MethodInfo__System__Nullable<double>__get_HasValue__), bVar7 != 0)) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCStack_27 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar30 = (Object__Array *)func_?();
          uStack_23 = (double)CONCAT44(uVar12,uStack_14);
          pOStack_26 = pOVar30;
          uVar13 = func_?();
          uStack_20 = (double)CONCAT44(uVar13,(undefined4)uStack_20);
          if (pOVar30 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          pQVar16 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                             ((Quaternion *)auStack_33,(LimbController *)schema,(MethodInfo *)0x0);
          QStack_15.x = pQVar16->x;
          QStack_15.y = pQVar16->y;
          QStack_15.z = pQVar16->z;
          QStack_15.w = pQVar16->w;
          func_?();
          func_?(pOStack_26);
          pOVar30 = pOStack_26;
          func_?();
          pSVar31 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_Integer__0__equals_minimum_value,
                              (IFormatProvider *)pCStack_27,pOVar30,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar31,schema,(MethodInfo *)0x0);
        }
      }
    }
    Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
              ((Nullable_1_Double_ *)&QStack_15,schema,(MethodInfo *)0x0);
    bVar7 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&stack0xffffff40,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar7 != 0) {
      pNVar34 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                          ((Nullable_1_Double_ *)&QStack_15,schema,(MethodInfo *)0x0);
      uVar13 = *(undefined4 *)&pNVar34->value;
      uVar24 = *(undefined4 *)((int)&pNVar34->value + 4);
      func_?();
      pOStack_5 = (Object__Array__Class *)&stack0xffffff30;
      uStack_23._4_4_ = uVar24;
      uStack_23._0_4_ = uVar13;
      func_?();
      fVar21 = (float10)func_?();
      uStack_23 = (double)fVar21;
      if (_UNK_? <=
          (double)CONCAT44((uint)((ulonglong)uStack_23 >> 0x20) & _UNK_?,
                           SUB84(uStack_23,0) & _UNK_?)) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pOStack_5 = TypeInfo__System__Object;
        uStack_20 = (double)CONCAT44(pCVar10,(undefined4)uStack_20);
        pOVar30 = (Object__Array *)func_?();
        pOStack_26 = pOVar30;
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?();
        }
        JsonConvert::JsonConvert_ToString_9(CONCAT44(uVar12,uStack_14),(MethodInfo *)0x0);
        if (pOVar30 == (Object__Array *)0x0) goto code_?;
        func_?();
        func_?();
        pNVar34 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                            ((Nullable_1_Double_ *)&fStack_28,schema,(MethodInfo *)0x0);
        QStack_15.x = *(float *)&pNVar34->value;
        QStack_15.y = *(float *)((int)&pNVar34->value + 4);
        QStack_15.z = *(float *)&pNVar34->has_value;
        QStack_15.w = *(float *)&pNVar34->field_0xc;
        func_?();
        func_?(pOStack_26);
        pOVar30 = pOStack_26;
        func_?();
        pSVar31 = Json::Utilities::StringUtils::StringUtils_FormatWith
                           (StringLiteral_Integer__0__is_not_evenly_divisi,uStack_20._4_4_,pOVar30,
                            (MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,pSVar31,schema,(MethodInfo *)0x0);
      }
    }
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (schema == (JsonSchemaModel *)0x0) {
    return;
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    value = (Object *)
            (*(code *)(pJVar1->klass->vtable).get_Value.method)
                      (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    propertyName = mscorlib.dll::System::Convert::Convert_ToString_2
                             (value,(IFormatProvider *)pCVar2,(MethodInfo *)0x0);
    pJVar3 = (this->fields)._currentScope;
    if ((pJVar3 != (JsonValidatingReader_SchemaScope *)0x0) &&
       (pDVar4 = (Dictionary_2_System_Object_System_Boolean_ *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pJVar3,(MethodInfo *)0x0),
       pDVar4 != (Dictionary_2_System_Object_System_Boolean_ *)0x0)) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Boolean]::Dictionary_2_System_Object_System_Boolean__ContainsKey
                        (pDVar4,(Object *)propertyName,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__ContainsKey_System__String_
                        );
      if (bVar5 != 0) {
        pJVar3 = (this->fields)._currentScope;
        if ((pJVar3 == (JsonValidatingReader_SchemaScope *)0x0) ||
           (pDVar4 = (Dictionary_2_System_Object_System_Boolean_ *)
                     System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)pJVar3,(MethodInfo *)0x0),
           pDVar4 == (Dictionary_2_System_Object_System_Boolean_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
        Dictionary_2_System_Object_System_Boolean__set_Item
                  (pDVar4,(Object *)propertyName,1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_bool>__set_Item_System__String__bool_
                  );
      }
      bVar5 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_AllowAdditionalProperties
                        (schema,(MethodInfo *)0x0);
      if ((bVar5 == 0) &&
         (bVar5 = JsonValidatingReader_IsPropertyDefinied
                            (this,schema,propertyName,(MethodInfo *)0x0), bVar5 == 0)) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        args = (Object__Array *)func_?(TypeInfo__System__Object,1);
        if (args == (Object__Array *)0x0) goto code_?;
        func_?(args,propertyName);
        if (args->max_length == 0) goto code_?;
        args->vector[0] = (Object *)propertyName;
        message = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Property___0___has_not_been_defi,
                             (IFormatProvider *)pCVar2,args,(MethodInfo *)0x0);
        JsonValidatingReader_RaiseError(this,message,schema,(MethodInfo *)0x0);
      }
      pJVar3 = (this->fields)._currentScope;
      if (pJVar3 != (JsonValidatingReader_SchemaScope *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)pJVar3,(int32_t)propertyName,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((schema != (JsonSchemaModel *)0x0) &&
     (bVar4 = JsonValidatingReader_TestType
                        (this,schema,JsonSchemaType__Enum_String,(MethodInfo *)0x0), bVar4 != 0)) {
    JsonValidatingReader_ValidateInEnumAndNotDisallowed(this,schema,(MethodInfo *)0x0);
    pJVar5 = (this->fields)._reader;
    if ((pJVar5 == (JsonReader *)0x0) ||
       (piVar6 = (int *)(*(code *)(pJVar5->klass->vtable).get_Value.method)(), piVar6 == (int *)0x0)
       ) goto code_?;
    this_00 = (Collection_1_VoxelHit_ *)(**(code **)(*piVar6 + 0xd8))();
    System.dll::System::Collections::Generic::
    SortedList`2[TKey,TValue]+GetEnumerator>c__Iterator0[System::Single,System::Object]::
    SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current
              ((SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object_ *)
               schema,(MethodInfo *)0x0);
    cVar7 = func_?();
    if (cVar7 != '\0') {
      System.dll::System::Collections::Generic::
      SortedList`2[TKey,TValue]+GetEnumerator>c__Iterator0[System::Single,System::Object]::
      SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current
                ((SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object_ *)
                 schema,(MethodInfo *)0x0);
      cVar7 = func_?();
      if (cVar7 != '\0') {
        if (this_00 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        iVar9 = func_?();
        if (iVar9 < (int)pIVar8) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar11 = (Object__Array *)func_?();
          if (pOVar11 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          System.dll::System::Collections::Generic::
          SortedList`2[TKey,TValue]+GetEnumerator>c__Iterator0[System::Single,System::Object]::
          SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current
                    ((SortedList_2_TKey_TValue_GetEnumerator_c_Iterator0_System_Single_System_Object_
                      *)schema,(MethodInfo *)0x0);
          func_?();
          func_?();
          func_?();
          pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_String___0___exceeds_maximum_len,
                               (IFormatProvider *)pCVar10,pOVar11,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar12,schema,(MethodInfo *)0x0);
        }
      }
    }
    mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
    Reflection::CustomAttributeTypedArgument]::
    Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
              ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                *)schema,(MethodInfo *)0x0);
    cVar7 = func_?();
    if (cVar7 != '\0') {
      mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
      Reflection::CustomAttributeTypedArgument]::
      Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                  *)schema,(MethodInfo *)0x0);
      cVar7 = func_?();
      if (cVar7 != '\0') {
        if (this_00 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        iVar9 = func_?();
        if ((int)pIVar8 < iVar9) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar11 = (Object__Array *)func_?();
          if (pOVar11 == (Object__Array *)0x0) goto code_?;
          func_?();
          func_?();
          mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
          Reflection::CustomAttributeTypedArgument]::
          Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                    ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                      *)schema,(MethodInfo *)0x0);
          func_?();
          func_?();
          func_?();
          pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_String___0___is_less_than_minimu,
                               (IFormatProvider *)pCVar10,pOVar11,(MethodInfo *)0x0);
          JsonValidatingReader_RaiseError(this,pSVar12,schema,(MethodInfo *)0x0);
        }
      }
    }
    pMVar13 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab
                        ((PrefabPool *)schema,(MethodInfo *)0x0);
    if (pMVar13 != (MVCollectibleObject *)0x0) {
      pMVar13 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab
                          ((PrefabPool *)schema,(MethodInfo *)0x0);
      if (pMVar13 != (MVCollectibleObject *)0x0) {
        iVar9 = func_?();
        uStack_1 = 0;
        while (iVar9 != 0) {
          cVar7 = func_?();
          if (cVar7 == '\0') {
            uStack_1 = 0xffffffff;
            if (iVar9 != 0) {
              func_?();
            }
            goto code_?;
          }
          pSVar12 = (String *)func_?();
          if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
            func_?();
          }
          bVar4 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                            ((String *)this_00,pSVar12,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            pOVar11 = (Object__Array *)func_?();
            if (pOVar11 == (Object__Array *)0x0) break;
            func_?();
            func_?();
            func_?();
            func_?();
            pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                (StringLiteral_String___0___does_not_match_rege,
                                 (IFormatProvider *)pCVar10,pOVar11,(MethodInfo *)0x0);
            JsonValidatingReader_RaiseError(this,pSVar12,schema,(MethodInfo *)0x0);
          }
        }
      }
code_?:
      func_?();
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Boolean <ValidateEndObject>m__0(KeyValuePair`2[System.String,System.Boolean]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader__ValidateEndObject_m__0
               (KeyValuePair_2_System_String_System_Boolean_ kv,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&kv,
                          MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_bool>__get_Value__
                         );
  return cVar1 == '\0';
}


/* String <ValidateEndObject>m__1(KeyValuePair`2[System.String,System.Boolean]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
         JsonValidatingReader__ValidateEndObject_m__1
                   (KeyValuePair_2_System_String_System_Boolean_ kv,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)
           func_?(&kv,
                           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_bool>__get_Key__
                          );
  return pSVar1;
}


/* JsonValidatingReader(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader__ctor
               (JsonValidatingReader *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  (this->fields)._reader = reader;
  this_00 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>
                           );
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Stack<Newtonsoft::Json::JsonValidatingReader::SchemaScope>__Stack__
            );
  (this->fields)._stack = (Stack_1_Newtonsoft_Json_JsonValidatingReader_SchemaScope_ *)this_00;
  return;
}


/* Void add_ValidationEventHandler(ValidationEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_add_ValidationEventHandler
               (JsonValidatingReader *this,ValidationEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppVVar1 = &(this->fields).ValidationEventHandler;
  a = *ppVVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((ValidationEventHandler__Class *)pDVar2->klass ==
          TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pVVar5 = (ValidationEventHandler *)func_?(ppVVar1,pDVar3,a);
    bVar6 = pVVar5 == a;
    a = pVVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* IEnumerable`1[Newtonsoft.Json.Schema.JsonSchemaModel] get_CurrentMemberSchemas() */

IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
JsonValidatingReader_get_CurrentMemberSchemas(JsonValidatingReader *this,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  input = (CultureInfo *)0xffffffff;
  pCStack_5 = (CultureInfo *)0xffffffff;
  pJVar6 = (this->fields)._currentScope;
  if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) {
    unaff_EDI = (ArgumentOutOfRangeException *)
                func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaModel,1);
    this_02 = (this->fields)._model;
    if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) goto code_?;
    if ((this_02 == (JsonSchemaModel *)0x0) || (iVar7 = func_?(), iVar7 != 0)) {
      bVar8 = 0;
      if ((unaff_EDI->fields)._._._.inner_exception != (Exception *)0x0) {
        (unaff_EDI->fields)._._._.message = (String *)this_02;
        this_01 = (List_1_VoxelHit_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                  (this_01,(IEnumerable_1_VoxelHit_ *)unaff_EDI,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_
                  );
        *unaff_FS_OFFSET = uStack_4;
        return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)this_01;
      }
      goto code_?;
    }
    func_?();
  }
  else {
    pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar6,
                         (MethodInfo *)0x0);
    if (pOVar9 == (Object *)0x0) {
code_?:
      pIVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_3
                          (
                          System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>_MethodInfo__System__Linq__Enumerable__Empty<Newtonsoft::Json::Schema::JsonSchemaModel>__
                          );
      *unaff_FS_OFFSET = uStack_4;
      return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pIVar10;
    }
    pJVar6 = (this->fields)._currentScope;
    if ((pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) ||
       (pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar6,
                             (MethodInfo *)0x0), pOVar9 == (Object *)0x0)) goto code_?;
    pMVar11 = (MethodInfo *)0x0;
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    pJVar6 = (this->fields)._currentScope;
    if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pJVar6,pMVar11);
    switch(pIVar12) {
    case (IList_1_VoxelHit_ *)0x0:
      pJVar6 = (this->fields)._currentScope;
      if (pJVar6 != (JsonValidatingReader_SchemaScope *)0x0) {
        pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar6,
                             (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)pOVar9;
      }
      break;
    case (IList_1_VoxelHit_ *)0x1:
      pJVar6 = (this->fields)._currentScope;
      if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) break;
      pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pJVar6,(MethodInfo *)0x0);
      if (pIVar13 != (IKogamaSetting *)0x0) {
        unaff_EDI = (ArgumentOutOfRangeException *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  ((List_1_UnityEngine_Vector4_ *)unaff_EDI,
                   MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                  );
        pIVar14 = JsonValidatingReader_get_CurrentSchemas(this,(MethodInfo *)0x0);
        if (pIVar14 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
          pCVar15 = (CultureInfo *)func_?();
          uStack_1 = 0;
          uStack_2 = 0;
          while (pCVar15 != (CultureInfo *)0x0) {
            cVar16 = func_?();
            if (cVar16 == '\0') {
              *(undefined4 *)(&stack0xffffffa8 + (int)input * 4) = 0x1a0;
joined_?:
              if (pCVar15 != (CultureInfo *)0x0) {
                uStack_2 = 0xffffff;
                uStack_1 = 0xff;
                func_?();
              }
              *unaff_FS_OFFSET = uStack_4;
              return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)unaff_EDI;
            }
            pPVar17 = (PrefabPool *)func_?();
            if (pPVar17 == (PrefabPool *)0x0) break;
            pCVar18 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                                ((DesktopEditModeController *)pPVar17,method_01);
            if (pCVar18 != (ClientShopRepository *)0x0) {
              pCVar18 = DesktopEditModeController::
                        DesktopEditModeController_get_ClientShopRepository
                                  ((DesktopEditModeController *)pPVar17,(MethodInfo *)0x0);
              pJVar6 = (this->fields)._currentScope;
              if ((pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) ||
                 (MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            ((KogamaSettingNumericBase_1_System_Single_ *)pJVar6,(MethodInfo *)0x0),
                 pCVar18 == (ClientShopRepository *)0x0)) break;
              cVar16 = func_?();
              if (cVar16 != '\0') {
                if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) break;
                func_?();
              }
            }
            method_01 = (MethodInfo *)&UNK_?;
            pOVar9 = ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
                      ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)pPVar17,
                                 (MethodInfo *)0x0);
            pCVar19 = pCStack_5;
            if (pOVar9 != (Object *)0x0) {
              pOVar9 = ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
                        ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)pPVar17,
                                   (MethodInfo *)0x0);
              if (pOVar9 == (Object *)0x0) break;
              iVar7 = func_?();
              uStack_1 = 1;
              while( true ) {
                if (iVar7 == 0) goto code_?;
                cVar16 = func_?();
                if (cVar16 == '\0') break;
                func_?();
                pJVar6 = (this->fields)._currentScope;
                if (pJVar6 == (JsonValidatingReader_SchemaScope *)0x0) goto code_?;
                input = (CultureInfo *)
                        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pJVar6,
                                   (MethodInfo *)0x0);
                method_01 = (MethodInfo *)func_?();
                if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar20 = System.dll::System::Text::RegularExpressions::Regex::Regex_IsMatch
                                   ((String *)input,(String *)method_01,(MethodInfo *)0x0);
                if (bVar20 != 0) {
                  func_?();
                  if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) goto code_?;
                  method_01 = (MethodInfo *)&UNK_?;
                  func_?();
                }
              }
              input = (CultureInfo *)((int)&pCStack_5->klass + 1);
              uStack_1 = 0;
              *(undefined4 *)(&stack0xffffffa4 + (int)input * 4) = 0x156;
              if (iVar7 != 0) {
                func_?();
              }
              pCVar19 = input;
              if (((input != (CultureInfo *)0xffffffff) &&
                  (*(int *)(&stack0xffffffa4 + (int)input * 4) == 0x156)) && (-1 < (int)input)) {
                input = pCStack_5;
                pCVar19 = pCStack_5;
              }
            }
            pCStack_5 = pCVar19;
            if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) break;
            iVar7 = func_?();
            if (iVar7 == 0) {
              if (pPVar17 == (PrefabPool *)0x0) break;
              bVar20 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_AllowAdditionalProperties
                                 ((JsonSchemaModel *)pPVar17,(MethodInfo *)0x0);
              if ((bVar20 != 0) &&
                 (pOVar21 = PrefabPool::PrefabPool_get_MVGameCoinChestPrefab
                                      (pPVar17,(MethodInfo *)0x0), pOVar21 != (ObjectPrefab *)0x0))
              {
                PrefabPool::PrefabPool_get_MVGameCoinChestPrefab(pPVar17,(MethodInfo *)0x0);
                func_?();
              }
            }
          }
        }
        break;
      }
      goto code_?;
    case (IList_1_VoxelHit_ *)0x2:
      unaff_EDI = (ArgumentOutOfRangeException *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)unaff_EDI,
                 MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaModel>__List__
                );
      method_00 = this;
      pIVar14 = JsonValidatingReader_get_CurrentSchemas(this,(MethodInfo *)0x0);
      if (pIVar14 != (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)0x0) {
        pCVar15 = (CultureInfo *)func_?();
        uStack_1 = 4;
        uStack_2 = 0;
        while (input = pCVar15, pCVar15 != (CultureInfo *)0x0) {
          cVar16 = func_?();
          if (cVar16 == '\0') goto joined_?;
          pPVar17 = (PrefabPool *)func_?();
          if (pPVar17 == (PrefabPool *)0x0) break;
          pOVar21 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(pPVar17,(MethodInfo *)method_00);
          method_00 = (JsonValidatingReader *)&UNK_?;
          bVar20 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_5
                             ((ICollection_1_System_Reflection_ParameterInfo_ *)pOVar21,
                              bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::Schema::JsonSchemaModel>_System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaModel>_
                             );
          if (bVar20 == 0) {
            pOVar21 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(pPVar17,(MethodInfo *)0x0);
            if (pOVar21 == (ObjectPrefab *)0x0) break;
            iVar7 = func_?();
            if (iVar7 == 1) {
              pOVar21 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(pPVar17,(MethodInfo *)0x0);
              if ((pOVar21 == (ObjectPrefab *)0x0) ||
                 (func_?(), unaff_EDI == (ArgumentOutOfRangeException *)0x0)) break;
              func_?();
            }
            pMVar11 = (MethodInfo *)&UNK_?;
            pOVar21 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(pPVar17,(MethodInfo *)0x0);
            if (pOVar21 == (ObjectPrefab *)0x0) break;
            iVar7 = func_?();
            pEVar22 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                     (this->fields)._currentScope;
            if (pEVar22 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) break;
            method_00 = (JsonValidatingReader *)&UNK_?;
            iVar23 = System.Core.dll::System::Linq::
                     Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                     Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                               (pEVar22,pMVar11);
            if (iVar23 + -1 < iVar7) {
              input = (CultureInfo *)
                      PrefabPool::PrefabPool_get_MVCheckpointPrefab(pPVar17,(MethodInfo *)0x0);
              pEVar22 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                       (this->fields)._currentScope;
              if (((pEVar22 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) ||
                  (System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             (pEVar22,(MethodInfo *)0x0), input == (CultureInfo *)0x0)) ||
                 (func_?(), unaff_EDI == (ArgumentOutOfRangeException *)0x0)) break;
              func_?();
            }
          }
          bVar20 = Json::Schema::JsonSchemaModel::JsonSchemaModel_get_AllowAdditionalProperties
                             ((JsonSchemaModel *)pPVar17,(MethodInfo *)0x0);
          if ((bVar20 != 0) &&
             (pOVar21 = PrefabPool::PrefabPool_get_MVGameCoinChestPrefab(pPVar17,(MethodInfo *)0x0),
             pOVar21 != (ObjectPrefab *)0x0)) {
            PrefabPool::PrefabPool_get_MVGameCoinChestPrefab(pPVar17,(MethodInfo *)0x0);
            input = pCVar15;
            if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) break;
            func_?();
          }
        }
      }
      break;
    case (IList_1_VoxelHit_ *)0x3:
      goto code_?;
    default:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      input = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      this_00 = (Collection_1_VoxelHit_ *)func_?();
      func_?();
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
      uVar24 = func_?();
      func_?(args);
      func_?(args,uVar24);
      func_?();
      message = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Unexpected_token_type___0_,(IFormatProvider *)input,args,
                           (MethodInfo *)0x0);
      unaff_EDI = (ArgumentOutOfRangeException *)func_?();
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (unaff_EDI,StringLiteral_TokenType,message,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  this_02 = (JsonSchemaModel *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            ((IsolatedStorageException *)this_02,StringLiteral_CurrentPropertyName_has_not_been,
             (MethodInfo *)0x0);
  bVar8 = (undefined1 *)0xffffffef < &stack0xffffffb8;
  func_?();
code_?:
  func_?();
  iVar7 = func_?();
  unaff_EDI->klass = (ArgumentOutOfRangeException__Class *)this_02->klass;
  bVar25 = (byte)((uint)input >> 8);
  bVar26 = bVar25 + extraout_CL;
  bVar27 = CARRY1(bVar25,extraout_CL) || CARRY1(bVar26,bVar8);
  pbVar28 = (byte *)(iVar7 + 0x68);
  bVar25 = *pbVar28;
  bVar29 = (byte)((uint)iVar7 >> 8);
  bVar30 = *pbVar28;
  *pbVar28 = bVar30 + bVar29 + bVar27;
  pcVar31 = (char *)(CONCAT22((short)((uint)input >> 0x10),CONCAT11(bVar26 + bVar8,(char)input)) +
                   0x6b);
  *pcVar31 = *pcVar31 + bVar29 + (CARRY1(bVar25,bVar29) || CARRY1(bVar30 + bVar29,bVar27));
  pcVar32 = (code *)swi(3);
  pIVar14 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)
            (*pcVar32)(&this_02->monitor,&this_02->monitor);
  return pIVar14;
}


/* IEnumerable`1[Newtonsoft.Json.Schema.JsonSchemaModel] get_CurrentSchemas() */

IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_CurrentSchemas
          (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._currentScope;
  if (pJVar1 != (JsonValidatingReader_SchemaScope *)0x0) {
    return (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)(pJVar1->fields)._schemas;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *)(*pcVar2)();
  return pIVar3;
}


/* Int32 get_Depth() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_Depth
                  (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_Depth.method)
                      (pJVar1,(pJVar1->klass->vtable).__unknown.methodPtr);
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Char get_QuoteChar() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
         JsonValidatingReader_get_QuoteChar(JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    uVar2 = (*(code *)(pJVar1->klass->vtable).get_QuoteChar.method)
                      (pJVar1,(pJVar1->klass->vtable).set_QuoteChar.methodPtr);
    return uVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  uVar2 = (*pcVar3)();
  return uVar2;
}


/* JsonToken get_TokenType() */

JsonToken__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_TokenType
          (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    JVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    return JVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  JVar2 = (*pcVar3)();
  return JVar2;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_get_Value
                   (JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    pOVar2 = (Object *)
             (*(code *)(pJVar1->klass->vtable).get_Value.method)
                       (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
    return pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Type get_ValueType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
       JsonValidatingReader_get_ValueType(JsonValidatingReader *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    pTVar2 = (Type *)(*(code *)(pJVar1->klass->vtable).get_ValueType.method)
                               (pJVar1,(pJVar1->klass->vtable).get_Depth.methodPtr);
    return pTVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}


/* Void remove_ValidationEventHandler(ValidationEventHandler) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::
     JsonValidatingReader_remove_ValidationEventHandler
               (JsonValidatingReader *this,ValidationEventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppVVar1 = &(this->fields).ValidationEventHandler;
  source = *ppVVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((ValidationEventHandler__Class *)pDVar2->klass ==
          TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__Newtonsoft__Json__Schema__ValidationEventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pVVar5 = (ValidationEventHandler *)func_?(ppVVar1,pDVar3,source);
    bVar6 = pVVar5 == source;
    source = pVVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_Schema(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader::JsonValidatingReader_set_Schema
               (JsonValidatingReader *this,JsonSchema *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).get_TokenType.method)
                    (this,(this->klass->vtable).get_Value.methodPtr);
  if (iVar1 == 0) {
    (this->fields)._schema = value;
    (this->fields)._model = (JsonSchemaModel *)0x0;
    return;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Cannot_change_schema_while_valid,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

