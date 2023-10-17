
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_OnDataUpdate
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate !=
      (Action *)0x0) {
    (*(TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate->fields
      )._._.invoke_impl)();
  }
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
    pMStack_1 = (MVWorldObjectClient__Class *)&TypeInfo__MVWorldObjectClient;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    pMStack_1 = TypeInfo__MVWorldObjectClient;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  (this->fields)._.previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar3,(MethodInfo *)0x0);
    (this->fields)._.gameObject = pGVar3;
    func_?(&(this->fields)._.gameObject,pGVar3);
    pGVar3 = (this->fields)._.gameObject;
    if (pGVar3 != (GameObject *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      (this->fields)._.goId = iVar4;
      pGVar3 = (this->fields)._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        (this->fields)._.transform = pTVar5;
        func_?(&(this->fields)._.transform,pTVar5);
        pMVar6 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                           (&MStack_7,(MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
        pTVar5 = (this->fields)._.transform;
        fStack_8 = (pMVar6->rotation).w;
        fStack_9 = (pMVar6->position).x;
        fStack_10 = (pMVar6->position).y;
        fStack_11 = (pMVar6->position).z;
        fStack_12 = (pMVar6->rotation).x;
        uStack_13._0_4_ = (pMVar6->rotation).y;
        uStack_13._4_4_ = (pMVar6->rotation).z;
        fStack_14 = (pMVar6->position).x;
        fStack_15 = (pMVar6->position).y;
        fStack_16 = (pMVar6->position).z;
        fStack_17 = (pMVar6->rotation).x;
        uStack_2._0_4_ = (pMVar6->rotation).y;
        uStack_2._4_4_ = (pMVar6->rotation).z;
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar5,pMVar6->position,(MethodInfo *)0x0);
          pTVar5 = (this->fields)._.transform;
          if (pTVar5 != (Transform *)0x0) {
            value.y = (float)(undefined4)uStack_13;
            value.x = fStack_12;
            value.z = (float)uStack_13._4_4_;
            value.w = fStack_8;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar5,value,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._.gameObject;
            if (pGVar3 != (GameObject *)0x0) {
              pCVar18 = (Collider *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (pGVar3,
                                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                 );
              (this->fields)._.collider = pCVar18;
              func_?(&(this->fields)._.collider,pCVar18);
              MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                        ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean get_EnableProgression() */

bool Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_get_EnableProgression
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_gamePassProgressionEnabled,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* GamePassProgressionDataObjectShared get_GamePassProgressionDataObjectShared() */

GamePassProgressionDataObjectShared *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_gamePassProgressionDataObject);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    unaff_ESI = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_gamePassProgressionDataObject,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = (String *)0x0;
    if (unaff_ESI != (String *)0x0) {
      if (unaff_ESI->klass == TypeInfo__System__String) {
        value = unaff_ESI;
      }
      if (value == (String *)0x0) goto code_?;
    }
    pGVar1 = (GamePassProgressionDataObjectShared *)
             Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                       (value,
                        MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
                       );
    return pGVar1;
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar2 = (code *)swi(3);
  pGVar1 = (GamePassProgressionDataObjectShared *)(*pcVar2)();
  return pGVar1;
}


/* GamePassProgressionDataObjectSharedValidator get_GamePassProgressionDataObjectSharedValidator()
    */

GamePassProgressionDataObjectSharedValidator *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectSharedValidator
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&StringLiteral_gamePassProgressionDataObjectVal);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey
                    (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(this->klass->vtable).get_RunTimeData.methodPtr)
                       (this,(this->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    pOVar3 = (ObscuredString *)
             Extensions::Extensions_GetObscuredType
                       (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
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
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar5 = (GamePassProgressionDataObjectSharedValidator *)
             Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                       (value_00,
                        MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
                       );
    return pGVar5;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_gamePassProgressionDataObject);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value_00 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)value,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)StringLiteral_gamePassProgressionDataObject,(Object *)value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    (*(this->klass->vtable).PartialUpdateWOData.methodPtr)
              (this,this_00,(this->klass->vtable).PartialUpdateWOData.method);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_01,(this->fields)._._.id,this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

