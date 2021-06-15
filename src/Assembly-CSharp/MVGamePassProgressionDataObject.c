
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_OnDataUpdate
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate ==
      (Action *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate ==
      (Action *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(JumpState_OnWallJumpDelegate **)(in_stack_2 + 0x2c) !=
      (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
              (*(JumpState_OnWallJumpDelegate **)(in_stack_2 + 0x2c),in_stack_3);
  }
  method_00 = *(MethodInfo **)(in_stack_2 + 0x14);
  pcVar1 = *(code **)(in_stack_2 + 8);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  piVar5 = piVar4;
  if (method_00->flags == 0xffff) {
    func_?(method_00);
  }
  cVar6 = func_?(method_00);
  if (cVar6 == '\0') {
    if ((char)method_00->iflags == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if ((method_00->flags != 0xffff) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar6 = func_?(piVar4);
    if (cVar6 != '\0') {
      return;
    }
    method_01 = method_00;
    cVar6 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_01);
    cVar8 = func_?(pOVar7);
    if (cVar6 == '\0') {
      if (cVar8 != '\0') {
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
        func_?(method_00->flags);
        return;
      }
      (**(code **)(*piVar4 + 0xc0 + (uint)method_00->flags * 8))(piVar4);
      return;
    }
    if (cVar8 == '\0') {
      puVar9 = (undefined4 *)
                func_?(*(undefined4 *)(*piVar4 + 0xc4 + (uint)method_00->flags * 8));
      (*(code *)*puVar9)(piVar4,puVar9);
      return;
    }
    uVar10 = 0;
    uVar11 = *(ushort *)(*piVar4 + 0xb6);
    piVar12 = piVar4;
    if (uVar11 != 0) {
      do {
        if (*(char **)(*(int *)(*piVar4 + 0x58) + (uint)uVar10 * 8) == method_00->name) {
          iVar13 = *piVar5 +
                  (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar10 * 8) +
                  method_00->flags + 0x18) * 8;
          goto code_?;
        }
        uVar10 = uVar10 + 1;
        piVar12 = piVar5;
      } while (uVar10 < uVar11);
    }
    piVar5 = piVar12;
    iVar13 = func_?(piVar5,method_00->name);
code_?:
    puVar9 = (undefined4 *)func_?(*(undefined4 *)(iVar13 + 4));
    (*(code *)*puVar9)(piVar5,puVar9);
    return;
  }
  (*pcVar1)(piVar4,method_00);
  return;
}


/* MVGamePassProgressionDataObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
               (MVGamePassProgressionDataObject *this,
               Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
  (this->fields)._.gameObject = pGVar1;
  if (pGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields)._.goId = iVar2;
    pGVar1 = (this->fields)._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      (this->fields)._.transform = pTVar3;
      pMVar4 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                         ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,
                          (MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
      pTVar3 = (this->fields)._.transform;
      fVar5 = (pMVar4->rotation).x;
      uVar6 = (pMVar4->rotation).y;
      uVar7 = (pMVar4->rotation).z;
      fVar8 = (pMVar4->rotation).w;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,pMVar4->position,(MethodInfo *)0x0);
        pTVar3 = (this->fields)._.transform;
        if (pTVar3 != (Transform *)0x0) {
          value.y = (float)uVar6;
          value.x = fVar5;
          value.z = (float)uVar7;
          value.w = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar3,value,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               (pGVar1,
                                UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                               );
            (this->fields)._.collider = (Collider *)pUVar9;
            MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                      ((MVWorldObjectClient *)this,data,
                       (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_EnableProgression() */

bool Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_get_EnableProgression
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_gamePassProgressionEnabled,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pBStack2 = TypeInfo__System__Boolean;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pBStack2 = (Boolean__Class *)pPVar1;
        pbVar3 = (bool *)func_?();
        return *pbVar3;
      }
      goto code_?;
    }
  }
  pBStack2 = (Boolean__Class *)0x0;
  func_?();
  pBStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* GamePassProgressionDataObjectShared get_GamePassProgressionDataObjectShared() */

GamePassProgressionDataObjectShared *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_gamePassProgressionDataObject,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    value = (Pool *)0x0;
    if (pPVar1 != (Pool *)0x0) {
      if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
        value = pPVar1;
      }
      if (value == (Pool *)0x0) goto code_?;
    }
    pXVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       ((String *)value,
                        MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
                       );
    return (GamePassProgressionDataObjectShared *)pXVar2;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GamePassProgressionDataObjectShared *)(*pcVar3)();
  return pGVar4;
}


/* GamePassProgressionDataObjectSharedValidator get_GamePassProgressionDataObjectSharedValidator()
    */

GamePassProgressionDataObjectSharedValidator *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectSharedValidator
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey
                    (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)
                       (this,(this->klass->vtable).set_RunTimeData.methodPtr);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    pOVar3 = (ObscuredString *)
             Extensions::Extensions_GetObscuredType
                       (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?();
    }
    value = (ObscuredString *)0x0;
    if (pOVar3 != (ObscuredString *)0x0) {
      if ((Object__Class *)pOVar3->klass ==
          (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
        value = pOVar3;
      }
      if (value == (ObscuredString *)0x0) {
        func_?();
        pcVar4 = (code *)swi(3);
        pGVar5 = (GamePassProgressionDataObjectSharedValidator *)(*pcVar4)();
        return pGVar5;
      }
    }
    value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit_1(value,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar6 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (value_00,
                        MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
                       );
    return (GamePassProgressionDataObjectSharedValidator *)pXVar6;
  }
  return (GamePassProgressionDataObjectSharedValidator *)0x0;
}


/* Void set_GamePassProgressionDataObjectShared(GamePassProgressionDataObjectShared) */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_set_GamePassProgressionDataObjectShared
               (MVGamePassProgressionDataObject *this,GamePassProgressionDataObjectShared *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value_00 = (CrossPlatformInputManager_VirtualButton *)
             Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)value,(MethodInfo *)0x0);
  woData = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)woData,StringLiteral_gamePassProgressionDataObject,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    (*(code *)(this->klass->vtable).PartialUpdateWOData.method)
              (this,woData,(this->klass->vtable).PartialRemoveFromWOData.methodPtr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_00,(int32_t)worldObjectID,woData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

