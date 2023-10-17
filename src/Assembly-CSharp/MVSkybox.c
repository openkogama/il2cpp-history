
/* Void Destroy() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Destroy(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).inventoryObject == 0) {
    pSVar1 = (this->fields).skybox;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar1 = (this->fields).skybox;
      if (pSVar1 != (SkyboxManager *)0x0) {
        SkyboxManager::SkyboxManager_Remove(pSVar1,this,(MethodInfo *)0x0);
        pSVar1 = (this->fields).skybox;
        if (pSVar1 != (SkyboxManager *)0x0) {
          SkyboxManager::SkyboxManager_RefreshColor(pSVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Initialize(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  (this->fields).skybox = pSVar1;
  func_?(&(this->fields).skybox,pSVar1);
  pSVar1 = (this->fields).skybox;
  if (pSVar1 != (SkyboxManager *)0x0) {
    SkyboxManager::SkyboxManager_Add(pSVar1,this,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_02,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                   (MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
        this_01 = TypeInfo__System__Action<LogicInputState,_LogicObjectManager>;
        this_03 = (Action_2_Int32Enum_Object_ *)func_?();
        if (this_03 != (Action_2_Int32Enum_Object_ *)0x0) {
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                     ,(MethodInfo *)0x0);
          pIVar2 = LogicClientsideFactory::
                   LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                             ((MVWorldObject *)this,1,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                              (Action_2_LogicInputState_LogicObjectManager_ *)this_03,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
          func_?();
          if ((this->fields).skybox != (SkyboxManager *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (*(char *)&this_01->interfaceOffsets != '\0') {
              SkyboxManager::SkyboxManager_ComputeSkyboxSettings
                        ((SkyboxManager *)this_01,(Color *)&(this_01->_0).fields,
                         (float *)&(this_01->_0).nestedTypes,
                         (float *)&(this_01->_0).implementedInterfaces,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
                        ((MonoBehaviour *)this_01,StringLiteral_DoAnimate,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                        ((MonoBehaviour *)this_01,StringLiteral_DoAnimate,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InitializeInventory(MVSkybox *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  (this->fields).inventoryObject = 1;
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InputStateUpdateCallback
               (MVSkybox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    this_00 = (this->fields).skybox;
    if (this_00 == (SkyboxManager *)0x0) {
      uVar1 = func_?(&puStack_2);
      func_?(uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SkyboxManager::SkyboxManager_RefreshColor(this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Reset(MVSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (SkyboxManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this_00->fields).initialized != 0) {
      SkyboxManager::SkyboxManager_ComputeSkyboxSettings
                (this_00,&(this_00->fields).targetColor,&(this_00->fields).targetSunAngle,
                 &(this_00->fields).targetFogDensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    }
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDefaultInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDefaultInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4);
  *(int *)&(this->fields)._._.interactionFlags = (int)(this->fields).defaultInteractionFlags;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
  return;
}


/* Void SetDeleteOnlyInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._._.interactionFlags = 1;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  return;
}


/* MVSkybox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox__ctor
               (MVSkybox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSkyboxPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = (uint)(this->fields)._._.interactionFlags | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._.interactionFlags = uVar2;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields).defaultInteractionFlags = uVar2;
    *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSkybox::MVSkybox_get_DocumentationType(MVSkybox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Skybox;
}


/* Single get_FogDensity() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_FogDensity(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Skybox_data_does_not_contain_fog);
    func_?(&StringLiteral_fogDensity);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_fogDensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_fogDensity,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        pSStack3 = TypeInfo__System__Single;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pSStack3 = (Single__Class *)pOVar2;
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pSStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Boolean get_SkyboxActive() */

bool Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxActive(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IInputSignalReceiver *)&TypeInfo__IInputSignalReceiver;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIStack_1 != (IInputSignalReceiver *)0x0) {
    pIStack_2 = TypeInfo__IInputSignalReceiver;
    uStack_3 = 1;
    bVar4 = func_?();
    return bVar4;
  }
  pIStack_1 = (IInputSignalReceiver *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Color get_SkyboxColor() */

Color * Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxColor
                  (Color *__return_storage_ptr__,MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SkyboxManager);
    func_?(&StringLiteral_color);
    func_?(&StringLiteral_Skybox_data_does_not_contain_col);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_col,(MethodInfo *)0x0);
      if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
        __return_storage_ptr__ = (Color *)&UNK_?;
        func_?();
      }
      pSVar2 = TypeInfo__SkyboxManager->static_fields;
      fVar3 = (pSVar2->defaultColor).g;
      fVar4 = (pSVar2->defaultColor).b;
      fVar5 = (pSVar2->defaultColor).a;
      __return_storage_ptr__->r = (pSVar2->defaultColor).r;
      __return_storage_ptr__->g = fVar3;
      __return_storage_ptr__->b = fVar4;
      __return_storage_ptr__->a = fVar5;
      return __return_storage_ptr__;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pCVar6 = (Color *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (this_01,(Object *)StringLiteral_color,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
    if (pCVar6 == (Color *)0x0) goto code_?;
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    if (((*(int *)(iVar7 + 0xc) != 0) && (1 < *(uint *)(iVar7 + 0xc))) &&
       (pMVar8 = *(MonitorData **)(iVar7 + 0x14), 2 < *(uint *)(iVar7 + 0xc))) {
      fVar3 = *(float *)(iVar7 + 0x18);
      pCVar6->r = (float)*(Object__Class **)(iVar7 + 0x10);
      pCVar6->g = (float)pMVar8;
      pCVar6->b = fVar3;
      pCVar6->a = 1.0;
      return pCVar6;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar9)();
  return pCVar6;
}


/* Single get_SunAngle() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SunAngle(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Skybox_data_does_not_contain_sun);
    func_?(&StringLiteral_sunAngle);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_sunAngle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_sunAngle,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        pSStack3 = TypeInfo__System__Single;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pSStack3 = (Single__Class *)pOVar2;
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pSStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}

