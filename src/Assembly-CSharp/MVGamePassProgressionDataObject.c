
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)this,(MethodInfo *)0x0);
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)();
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
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
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
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this_00,(MethodInfo *)0x0)
  ;
  ppGVar1 = &(this->fields)._.gameObject;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  if (*ppGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)*ppGVar1,(MethodInfo *)0x0);
    (this->fields)._.goId = iVar2;
    if (*ppGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar1,(MethodInfo *)0x0);
      ppTVar4 = &(this->fields)._.transform;
      *ppTVar4 = pTVar3;
      func_?();
      pMVar5 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                          ((MVWorldObjectClient_TransformData *)&stack0xffffffa8,
                           (MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
      fVar6 = (pMVar5->rotation).w;
      uVar7 = (pMVar5->rotation).z;
      uVar8 = (pMVar5->rotation).x;
      uVar9 = (pMVar5->rotation).y;
      value.y = (float)uVar9;
      value.x = (float)uVar8;
      if (*ppTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (*ppTVar4,pMVar5->position,(MethodInfo *)0x0);
        if (*ppTVar4 != (Transform *)0x0) {
          value.z = (float)uVar7;
          value.w = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (*ppTVar4,value,(MethodInfo *)0x0);
          if (*ppGVar1 != (GameObject *)0x0) {
            pCVar10 = (Collider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (*ppGVar1,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                );
            (this->fields)._.collider = pCVar10;
            func_?();
            MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                      ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_gamePassProgressionEnabled,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_gamePassProgressionDataObject,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value.m_Index = 0;
    if (unaff_ESI.m_Index != 0) {
      if (*(String__Class **)unaff_ESI.m_Index == TypeInfo__System__String) {
        value = unaff_ESI;
      }
      if ((String *)value.m_Index == (String *)0x0) goto code_?;
    }
    pGVar1 = (GamePassProgressionDataObjectShared *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)value.m_Index,
                        MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
                       );
    return pGVar1;
  }
  func_?();
code_?:
  func_?(unaff_ESI.m_Index);
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
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey
                    (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)
                       (this,(this->klass->vtable).set_RunTimeData.methodPtr);
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
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
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
  value_00 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)value,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_gamePassProgressionDataObject,(Object *)value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    (*(code *)(this->klass->vtable).PartialUpdateWOData.method)(this,this_00);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_01,(this->fields)._._.id,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

