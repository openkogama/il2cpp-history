
/* Void AppendRecursive(StringBuilder, IEnumerable, Int32, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_AppendRecursive
               (StringBuilder *sb,IEnumerable *collection,int32_t depth,bool eachEntryNewLine,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pMStack_3 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_4 = (undefined4 *)&stack0xffffffd0;
  func_?();
  cVar5 = '\x01';
  if (collection != (IEnumerable *)0x0) {
    iVar6 = func_?(0,TypeInfo__System__Collections__IEnumerable,collection);
    uStack_1 = 0;
code_?:
    if (iVar6 != 0) {
      cVar7 = func_?(1,TypeInfo__System__Collections__IEnumerator,iVar6);
      if (cVar7 == '\0') {
        *puStack_4 = 0x13c;
        uStack_1 = 0xffffffff;
        iVar6 = func_?(iVar6,TypeInfo__System__IDisposable);
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
        }
        *unaff_FS_OFFSET = pMStack_3;
        return;
      }
      pMVar8 = (MethodInfo *)&UNK_?;
      value = (Object *)func_?(0,TypeInfo__System__Collections__IEnumerator,iVar6);
      if ((cVar5 == '\0') && (eachEntryNewLine == 0)) {
        pSVar9 = ::StringLiteral___;
        if (sb == (StringBuilder *)0x0) goto code_?;
      }
      else {
        cVar5 = '\0';
        if (sb == (StringBuilder *)0x0) goto code_?;
        pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)sb,(MethodInfo *)unaff_EBX);
        if (pIVar10 != (IList_1_VoxelHit_ *)0x0) {
          pSVar9 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (sb,pSVar9,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = TypeInfo__System__String->static_fields->Empty;
        if (pSVar9 == (String *)0x0) goto code_?;
        pMVar8 = (MethodInfo *)&UNK_?;
        pSVar9 = mscorlib.dll::System::String::String_PadLeft(pSVar9,depth * 2,(MethodInfo *)0x0);
        unaff_EBX = (IEnumerable__Class *)0x0;
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (sb,pSVar9,(MethodInfo *)unaff_EBX);
      if (value != (Object *)0x0) {
        pOVar11 = (Object *)0x0;
        if ((KeyValuePair_2_System_Object_System_Object___Class *)value->klass ==
            TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>) {
          pOVar11 = value;
        }
        if (pOVar11 != (Object *)0x0) {
          iVar12 = func_?();
          pSVar13 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                             (sb,*(String **)(iVar12 + 4),(MethodInfo *)0x0);
          pMStack_3 = 
          MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
          ;
          iVar12 = func_?();
          if (((iVar12 == 0) ||
              (pSVar9 = (String *)func_?(3,iVar12), pSVar13 == (StringBuilder *)0x0)) ||
             (pSVar13 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                 (pSVar13,pSVar9,pMVar8), pSVar13 == (StringBuilder *)0x0))
          goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (pSVar13,StringLiteral__v__,(MethodInfo *)0x0);
          func_?();
          iVar12 = func_?();
          if (iVar12 == 0) {
code_?:
            pMVar8 = 
            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
            ;
            iVar12 = func_?();
            pSVar9 = StringLiteral_NULL;
            if (iVar12 != 0) {
              pMVar8 = 
              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
              ;
              iVar12 = func_?();
              if (iVar12 == 0) goto code_?;
              pSVar9 = (String *)func_?(3,iVar12);
            }
            if (sb == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append(sb,pSVar9,pMVar8);
            unaff_EBX = (IEnumerable__Class *)&UNK_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (sb,0x5d,(MethodInfo *)0x0);
          }
          else {
            piVar14 = (int *)func_?();
            if (piVar14 != (int *)0x0) {
              piVar15 = (int *)0x0;
              if ((String__Class *)*piVar14 == TypeInfo__System__String) {
                piVar15 = piVar14;
              }
              if (piVar15 != (int *)0x0) goto code_?;
            }
            func_?();
            if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Extensions->_1).cctor_started == 0)) {
              func_?();
            }
            unaff_EBX = TypeInfo__System__Collections__IEnumerable;
            collection_00 = (IEnumerable *)func_?();
            Extensions_AppendRecursive
                      (sb,collection_00,depth + 1,eachEntryNewLine,(MethodInfo *)0x0);
            cVar5 = '\x01';
          }
          goto code_?;
        }
      }
      unaff_EBX = (IEnumerable__Class *)&UNK_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_3(sb,value,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  func_?(0);
  func_?(cVar5,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* String BuildString[Object](IEnumerable`1[System.Object]) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString
                   (IEnumerable_1_System_Object_ *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)(*(code *)(*method->parameters)->data)(collection,0,1,*method->parameters);
  return pSVar1;
}


/* String BuildStringRecursive(IEnumerable, String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildStringRecursive
                   (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this,prependInfo,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    pIStack1 =
         (this->klass->vtable).System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr;
    pSStack2 = this;
    pSVar3 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
    return pSVar3;
  }
code_?:
  pIStack1 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String BuildString[Object](IEnumerable`1[System.Object], Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_1
                   (IEnumerable_1_System_Object_ *collection,bool eachEntryNewLine,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*(code *)(*method->parameters)->data)
                     (collection,0,_eachEntryNewLine,*method->parameters);
  return pSVar1;
}


/* String BuildString[Object](IEnumerable`1[System.Object], String) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_2
                   (IEnumerable_1_System_Object_ *collection,String *prependInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*(code *)(*method->parameters)->data)(collection,prependInfo,1,*method->parameters);
  return pSVar1;
}


/* String BuildString[Object](IEnumerable`1[System.Object], String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_3
                   (IEnumerable_1_System_Object_ *collection,String *prependInfo,
                   bool eachEntryNewLine,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                        (this,prependInfo,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
    if (this_00 == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this_00,pSVar1,(MethodInfo *)0x0);
  }
  bVar2 = true;
  if (collection != (IEnumerable_1_System_Object_ *)0x0) {
    if (((*method->parameters)[0x17].type & 1) == 0) {
      func_?();
    }
    puVar3 = (undefined4 *)&UNK_?;
    pIVar4 = (Il2CppType *)func_?();
    while (pIVar4 != (Il2CppType *)0x0) {
      pIVar5 = (Il2CppType *)&UNK_?;
      pIVar6 = TypeInfo__System__Collections__IEnumerator;
      cVar7 = func_?();
      if (cVar7 == '\0') {
        *puVar3 = 0x88;
        if (pIVar4 != (Il2CppType *)0x0) {
          func_?();
        }
        if (this != (StringBuilder *)0x0) {
          pSVar1 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
          *unaff_FS_OFFSET = pIVar6;
          return pSVar1;
        }
        break;
      }
      pIVar8 = method->parameters[1];
      if ((pIVar8[0x17].type & 1) == 0) {
        pIVar5 = pIVar8;
        func_?();
      }
      iVar9 = (pIVar4->data).__klassIndex;
      uVar10 = 0;
      if (*(ushort *)(iVar9 + 0xb6) != 0) {
        do {
          if (*(Il2CppType **)(*(int *)(iVar9 + 0x58) + (uint)uVar10 * 8) == pIVar8) {
            puVar3 = (undefined4 *)
                     (iVar9 + 0xc0 + *(int *)(*(int *)(iVar9 + 0x58) + 4 + (uint)uVar10 * 8) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
          pIVar4 = pIVar5;
        } while (uVar10 < *(ushort *)(iVar9 + 0xb6));
      }
      puVar3 = (undefined4 *)func_?();
      pIVar5 = pIVar4;
code_?:
      value = (Object *)(*(code *)*puVar3)();
      if (bVar2) {
        bVar2 = false;
      }
      else {
        if (this == (StringBuilder *)0x0) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,::StringLiteral___,(MethodInfo *)0x0);
        if (eachEntryNewLine != 0) {
          pSVar1 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,pSVar1,(MethodInfo *)0x0);
        }
      }
      if (this == (StringBuilder *)0x0) break;
      puVar3 = (undefined4 *)&UNK_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_3
                (this,value,(MethodInfo *)0x0);
      pIVar4 = pIVar5;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar11)();
  return pSVar1;
}


/* Boolean ContainsObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_ContainsObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)hashtable,(String *)TypeInfo__Extensions->static_fields->obscuredString,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Transform FindChildRecursively(Transform, String) */

Transform *
Assembly-CSharp.dll::Extensions::Extensions_FindChildRecursively
          (Transform *transform,String *child,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTStack_4 = (Transform *)0x0;
  func_?();
  pTStack_5 = (Transform *)0x0;
  if (transform == (Transform *)0x0) {
code_?:
    uVar6 = func_?();
    uVar6 = func_?(uVar6,0,0);
    func_?(uVar6);
    pcVar7 = (code *)swi(3);
    pTVar8 = (Transform *)(*pcVar7)();
    return pTVar8;
  }
  pIVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (transform,(MethodInfo *)0x0);
  uStack_1 = 0;
  do {
    if (pIVar9 == (IEnumerator *)0x0) goto code_?;
    cVar10 = func_?(1);
    pTVar8 = pTStack_5;
    if (cVar10 == '\0') break;
    pTVar11 = (Transform *)func_?(0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    bVar12 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
    if (((pTVar11->klass->_1).naturalAligment < bVar12) ||
       ((pTVar11->klass->_1).typeHierarchy[bVar12 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pTVar8 = (Transform *)0x0;
    if (bVar13) {
      pTVar8 = pTVar11;
    }
    if (pTVar8 == (Transform *)0x0) {
      func_?();
      goto code_?;
    }
    a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                  ((Object_1 *)pTVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar14 = mscorlib.dll::System::String::String_op_Equality(a,child,(MethodInfo *)0x0);
  } while (bVar14 == 0);
  pTStack_5 = pTVar8;
  iVar15 = 0;
  uStack_1 = 0xffffffff;
  iVar16 = func_?();
  if (iVar16 != 0) {
    func_?(0,TypeInfo__System__IDisposable,iVar16);
  }
  if (pIVar9 == (IEnumerator *)0x56) {
    iVar15 = -1;
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTStack_5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar14 != 0) {
    if (transform == (Transform *)0x0) goto code_?;
    pIVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                       (transform,(MethodInfo *)0x0);
    uStack_1 = 2;
    do {
      if (pIVar9 == (IEnumerator *)0x0) goto code_?;
      cVar10 = func_?(1);
      if (cVar10 == '\0') {
        *(undefined4 *)(&stack0xffffffb8 + (iVar15 + 1) * 4) = 0xc2;
        goto code_?;
      }
      func_?(0);
      pTVar8 = (Transform *)func_?();
      if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Extensions->_1).cctor_started == 0)) {
        func_?(TypeInfo__Extensions);
      }
      pTStack_5 = Extensions_FindChildRecursively(pTVar8,child,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_5,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar14 == 0);
    *(undefined4 *)(&stack0xffffffb8 + (iVar15 + 1) * 4) = 0xc4;
    pTStack_4 = pTStack_5;
code_?:
    uStack_1 = 0xffffffff;
    iVar16 = func_?();
    if (iVar16 != 0) {
      func_?(0);
    }
    if ((iVar15 + 1 != -1) && (*(int *)(&stack0xffffffb8 + (iVar15 + 1) * 4) == 0xc4))
    goto code_?;
  }
  pTStack_4 = pTStack_5;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return pTStack_4;
}


/* Object GetObscuredType(Dictionary`2[System.Object,System.Object], String) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetObscuredType
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)hashtable,
                        (Type *)TypeInfo__Extensions->static_fields->obscuredString,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    return (Object *)pPVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* Void Log[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache0 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache0 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  (*(code *)(*method->parameters)->data)
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache0,prependInfo,
             _eachEntryNewLine,*method->parameters);
  return;
}


/* Void LogError[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogError
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache2 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache2 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  (*(code *)(*method->parameters)->data)
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache2,prependInfo,
             _eachEntryNewLine,*method->parameters);
  return;
}


/* Void LogErrorRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogErrorRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache5 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache5 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  Extensions_LogRecursive_1
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache5,prependInfo,
             eachEntryNewLine,(MethodInfo *)0x0);
  return;
}


/* Void LogRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache3 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache3 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  Extensions_LogRecursive_1
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache3,prependInfo,
             eachEntryNewLine,(MethodInfo *)0x0);
  return;
}


/* Void LogRecursive(IEnumerable, Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive_1
               (IEnumerable *collection,Action_1_String_ *logFunc,String *prependInfo,
               bool eachEntryNewLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this,prependInfo,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    (*(code *)(this->klass->vtable).ToString.method)();
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LogWarning[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarning
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache1 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache1 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  (*(code *)(*method->parameters)->data)
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache1,prependInfo,
             _eachEntryNewLine,*method->parameters);
  return;
}


/* Void LogWarningRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarningRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  if (TypeInfo__Extensions->static_fields->__f__mg_cache4 == (Action_1_String_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    TypeInfo__Extensions->static_fields->__f__mg_cache4 = (Action_1_String_ *)this;
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  Extensions_LogRecursive_1
            (collection,TypeInfo__Extensions->static_fields->__f__mg_cache4,prependInfo,
             eachEntryNewLine,(MethodInfo *)0x0);
  return;
}


/* Void Log[Object](IEnumerable`1[System.Object], Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_1
               (IEnumerable_1_System_Object_ *collection,Action_1_String_ *logFunc,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  obj = (Dictionary_2_System_String_System_Object_ *)
        (*(code *)(*method->parameters)->data)
                  (collection,prependInfo,_eachEntryNewLine,*method->parameters);
  if (logFunc != (Action_1_String_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               logFunc,obj,MethodInfo__System__Action<System::String>__Invoke_System__String_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Log[Object,Object](Dictionary`2[System.Object,System.Object], String) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_2
               (Dictionary_2_System_Object_System_Object_ *collection,String *prependInfo,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_9 = (undefined4 *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
            (this,prependInfo,(MethodInfo *)0x0);
  bVar10 = true;
  pSStack_11 = this;
  if (collection != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puVar12 = (undefined4 *)(*(code *)(*method->parameters)->data)();
    auStack_6._0_4_ = *puVar12;
    auStack_6._4_4_ = puVar12[1];
    auStack_6._8_4_ = puVar12[2];
    auStack_6._12_4_ = puVar12[3];
    auStack_6._16_4_ = puVar12[4];
    uStack_1 = 0;
    while( true ) {
      pLStack_13 = (LevelRewardsManager__Class *)method->parameters[6];
      pKStack_14 = (KeyValuePair_2_System_Int32_System_Int32_ *)auStack_6;
      cVar15 = func_?();
      if (cVar15 == '\0') break;
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,(MethodInfo *)method->parameters[1]);
      if (bVar10) {
        bVar10 = false;
      }
      else {
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,::StringLiteral___,(MethodInfo *)0x0);
      }
      if (this == (StringBuilder *)0x0) goto code_?;
      pMVar16 = (MethodInfo *)&UNK_?;
      pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                         (this,StringLiteral__k__,(MethodInfo *)0x0);
      pKStack_14 = &KStack_8;
      pLStack_13 = (LevelRewardsManager__Class *)method->parameters[2];
      pOVar18 = (Object *)func_?();
      if ((pSVar17 == (StringBuilder *)0x0) ||
         (pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_3
                             (pSVar17,pOVar18,pMVar16), pSVar17 == (StringBuilder *)0x0))
      goto code_?;
      pMVar16 = (MethodInfo *)&UNK_?;
      pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                         (pSVar17,StringLiteral__v__,(MethodInfo *)0x0);
      pKStack_14 = &KStack_8;
      pLStack_13 = (LevelRewardsManager__Class *)method->parameters[4];
      pOVar18 = (Object *)func_?();
      if ((pSVar17 == (StringBuilder *)0x0) ||
         (pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_3
                             (pSVar17,pOVar18,pMVar16), pSVar17 == (StringBuilder *)0x0))
      goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (pSVar17,::StringLiteral__,(MethodInfo *)0x0);
    }
    *puStack_9 = 0x97;
    uStack_1 = 0xffffffff;
    pIVar19 = method->parameters[7];
    if ((pIVar19[0x17].type & 1) == 0) {
      func_?();
    }
    iStack_20 = auStack_6._16_4_;
    uVar21 = 0;
    pKStack_14 = (KeyValuePair_2_System_Int32_System_Int32_ *)0xffffffff;
    pLStack_13 = (LevelRewardsManager__Class *)auStack_6._0_4_;
    pMStack_22 = (MonitorData *)auStack_6._4_4_;
    pDStack_23 = (Dictionary_2_System_Int32_System_Int32_ *)auStack_6._8_4_;
    iStack_24 = auStack_6._12_4_;
    pIStack_25 = pIVar19;
    if (*(short *)&pIVar19[0x16].type != 0) {
      do {
        if (pIVar19[0xb].data.type[uVar21].data.dummy == TypeInfo__System__IDisposable) {
          pIVar19 = pIVar19 + *(int *)&pIVar19[0xb].data.type[uVar21].attrs + 0x18;
          goto code_?;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)&pIVar19[0x16].type);
    }
    pIVar19 = (Il2CppType *)func_?(&pIStack_25,TypeInfo__System__IDisposable);
code_?:
    (*(code *)pIVar19->data)(&pIStack_25);
    auStack_6._16_4_ = iStack_20;
    auStack_6._0_4_ = pLStack_13;
    auStack_6._4_4_ = pMStack_22;
    auStack_6._8_4_ = pDStack_23;
    auStack_6._12_4_ = iStack_24;
    if (iStack_7 != 0) goto code_?;
    if (this != (StringBuilder *)0x0) {
      pOVar18 = (Object *)(*(code *)(this->klass->vtable).ToString.method)();
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar18,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Boolean RemoveObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_RemoveObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)hashtable,(String *)TypeInfo__Extensions->static_fields->obscuredString,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void ScaleBounds(GameObject, Single) */

void Assembly-CSharp.dll::Extensions::Extensions_ScaleBounds
               (GameObject *gameObject,float targetSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
  stack0xffffff80 = (MonitorData *)0x0;
  if (gameObject != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pNVar3 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffb0,pTVar2,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      stack0xffffff80 = (MonitorData *)&UNK_?;
      pEStack_1 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
                   (pNVar3->value).m_Center.x;
      func_?();
    }
    stack0xffffff80 = (MonitorData *)&VStack_4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_4,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    stack0xffffff80 = (MonitorData *)&VStack_4;
    pEStack_8 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)uVar6;
    pMStack_9 = (MonitorData *)uVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one(&VStack_4,(MethodInfo *)0x0);
    unique0x100003b6 = pMStack_9;
    pEStack_1 = pEStack_8;
    func_?(&stack0xffffff98);
    uVar10 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Byte]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)&pEStack_1,
                       MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    if (uVar10 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Failed_to_find_bounds_,(MethodInfo *)0x0);
    }
    else {
      func_?();
    }
    puVar11 = (undefined8 *)func_?();
    VStack_4._0_8_ = *puVar11;
    puVar11 = (undefined8 *)func_?();
    uStack_12 = *puVar11;
    stack0xffffff80 = (MonitorData *)&UNK_?;
    puVar11 = (undefined8 *)func_?();
    uStack_13 = *puVar11;
    fStack_14 = *(float *)(puVar11 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    b = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                  (uStack_12._4_4_,fStack_14,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max(VStack_4.x,b,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    pMStack_9 = (MonitorData *)0x0;
    uStack_15 = 0;
    pEStack_8 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)0x0;
    func_?();
    if (pTVar2 != (Transform *)0x0) {
      value.y = (float)pEStack_8;
      value.x = (float)uStack_15;
      value.z = (float)pMStack_9;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetObscuredType[Object](Dictionary`2[System.Object,System.Object], String, Object) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)hashtable,
               (String *)TypeInfo__Extensions->static_fields->obscuredString,(Theme *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetObscuredType[ObscuredFloat](Dictionary`2[System.Object,System.Object], String,
   ObscuredFloat) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_1
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredFloat value
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  bStack_2 = value.inited;
  uStack_3 = value._17_3_;
  iStack_4 = value.currentCryptoKey;
  AStack_5 = value.hiddenValue;
  pBStack_6 = value.hiddenValueOld;
  fStack_7 = value.fakeValue;
  pIVar8 = *method->parameters;
  if ((pIVar8[0x17].type & 1) == 0) {
    func_?(pIVar8);
  }
  value_00 = (Theme *)func_?(pIVar8,&iStack_4);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)hashtable,(String *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetObscuredType[ObscuredInt](Dictionary`2[System.Object,System.Object], String, ObscuredInt)
    */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_2
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredInt value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  iStack_2 = value.currentCryptoKey;
  iStack_3 = value.hiddenValue;
  iStack_4 = value.fakeValue;
  bStack_5 = value.inited;
  uStack_6 = value._13_3_;
  pIVar7 = *method->parameters;
  if ((pIVar7[0x17].type & 1) == 0) {
    func_?(pIVar7);
  }
  value_00 = (Theme *)func_?(pIVar7,&iStack_2);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)hashtable,(String *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetObscuredType[ObscuredBool](Dictionary`2[System.Object,System.Object], String,
   ObscuredBool) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_3
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredBool value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  OStack_2.fakeValue = value.fakeValue;
  OStack_2.fakeValueChanged = value.fakeValueChanged;
  OStack_2.inited = value.inited;
  OStack_2._11_1_ = value._11_1_;
  OStack_2.currentCryptoKey = value.currentCryptoKey;
  OStack_2._1_3_ = value._1_3_;
  OStack_2.hiddenValue = value.hiddenValue;
  pIVar3 = *method->parameters;
  if ((pIVar3[0x17].type & 1) == 0) {
    func_?(pIVar3);
  }
  value_00 = (Theme *)func_?(pIVar3,&OStack_2);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)hashtable,(String *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToSerializeString(Vector3) */

String * Assembly-CSharp.dll::Extensions::Extensions_ToSerializeString
                   (Vector3 vec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)func_?(&vec,0);
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4(this,pSVar1,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                       (this,::StringLiteral__,(MethodInfo *)0x0);
    value = vec.y;
    if (pSVar2 != (StringBuilder *)0x0) {
      vec.y = 0.0;
      vec.x = value;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_4
                (pSVar2,value,(MethodInfo *)0x0);
      vec.y = 0.0;
      vec.x = (float)::StringLiteral__;
      pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                         (this,::StringLiteral__,(MethodInfo *)0x0);
      if (pSVar2 != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_4
                  (pSVar2,vec.z,(MethodInfo *)0x0);
        pSVar1 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
        return pSVar1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Vector3 ToVector3FromSerializeString(String) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_ToVector3FromSerializeString
                    (Vector3 *__return_storage_ptr__,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  pSVar1 = unaff_EDI;
  if (separator->max_length == 0) {
code_?:
    text = pSVar1;
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    separator->vector[0] = 0x20;
    unaff_EDI = text;
    if (text == (String *)0x0) {
code_?:
      func_?(0);
      pSVar1 = unaff_EDI;
      goto code_?;
    }
    pSVar3 = mscorlib.dll::System::String::String_Split(text,separator,(MethodInfo *)0x0);
    if (pSVar3 == (String__Array *)0x0) goto code_?;
    if (pSVar3->max_length != 3) goto code_?;
    text = pSVar3->vector[0];
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    mscorlib.dll::System::Convert::Convert_ToSingle_9(text,(MethodInfo *)0x0);
    if (pSVar3->max_length < 2) goto code_?;
    mscorlib.dll::System::Convert::Convert_ToSingle_9(pSVar3->vector[1],(MethodInfo *)0x0);
    if (2 < pSVar3->max_length) {
      mscorlib.dll::System::Convert::Convert_ToSingle_9(pSVar3->vector[2],(MethodInfo *)0x0);
      uRam_? = 0;
      uRam_? = 0;
      func_?(0);
      return (Vector3 *)0x0;
    }
  }
  uVar2 = func_?();
  func_?(uVar2);
code_?:
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_The_input_string_doesnt_contain_,text,(MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar1,(MethodInfo *)0x0);
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Extensions() */

void Assembly-CSharp.dll::Extensions::Extensions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  value = TypeInfo__System__String->static_fields->Empty;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(value,(MethodInfo *)0x0);
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  return;
}

