
/* Void DeSelect() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
               (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).RemoveSelectionBox.method)
            (this,(this->klass->vtable).RemovePreviewBox.methodPtr);
  return;
}


/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_GetCurrentItemState
          (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    func_?(0);
    pDVar2 = extraout_EDX;
  }
  else {
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar4) {
      pDVar5 = pDVar2;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return pDVar5;
    }
  }
  func_?(pDVar2,unaff_ESI);
  pcVar6 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar6)();
  return pDVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
               (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType =
       System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
       Object,System::Object]::
       Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                 ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                  this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables
                      ((WorldObjectType__Enum)worldObjectType,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_health,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar2 = (float *)func_?();
      maxValue = *pfVar2;
      pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pOVar3 != (ObjectPrefab *)0x0) {
        pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                           ((MVRuntimeDataVariables *)pOVar3,StringLiteral_health,0.2,0,0.0,maxValue
                            ,(MethodInfo *)0x0);
        (this->fields).Health = pMVar4;
        pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                           ((PrefabPool *)this,(MethodInfo *)0x0);
        if (pOVar3 != (ObjectPrefab *)0x0) {
          pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                             ((MVRuntimeDataVariables *)pOVar3,StringLiteral_shield,0.2,0,0.0,
                              maxValue,(MethodInfo *)0x0);
          (this->fields).shield = pMVar4;
          pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                             ((PrefabPool *)this,(MethodInfo *)0x0);
          if (pOVar3 != (ObjectPrefab *)0x0) {
            pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                               ((MVRuntimeDataVariables *)pOVar3,StringLiteral_currentItem,0.0,1,
                                (MethodInfo *)0x0);
            (this->fields).CurrentItem = pMVar5;
            pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
            if (pOVar3 != (ObjectPrefab *)0x0) {
              pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                 ((MVRuntimeDataVariables *)pOVar3,StringLiteral_isFiring,0.0,0,
                                  (MethodInfo *)0x0);
              (this->fields).IsFiring = pMVar5;
              pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                 ((PrefabPool *)this,(MethodInfo *)0x0);
              if (pOVar3 != (ObjectPrefab *)0x0) {
                pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                   ((MVRuntimeDataVariables *)pOVar3,StringLiteral_modifiers,1.0,0,
                                    (MethodInfo *)0x0);
                (this->fields).Modifiers = pMVar5;
                pGVar6 = (this->fields)._._._._.gameObject;
                if (pGVar6 != (GameObject *)0x0) {
                  this_01 = (VehiclePickupOwner *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_85
                                      (pGVar6,
                                       VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                                      );
                  pGVar6 = (this->fields)._._._._.gameObject;
                  if (pGVar6 != (GameObject *)0x0) {
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren_29
                                        (pGVar6,
                                         MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                                        );
                    pMVar5 = (this->fields).CurrentItem;
                    isFiringRuntimeVariable = (this->fields).IsFiring;
                    if (this_02 != (UseInteratorVisualization__Array *)0x0) {
                      mountTransform =
                           UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0);
                      if (this_01 != (VehiclePickupOwner *)0x0) {
                        VehiclePickupOwner::VehiclePickupOwner_Init
                                  (this_01,pMVar5,isFiringRuntimeVariable,mountTransform,
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnEnterObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnEnterObject.method)
                      (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnExitObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnExitObject.method)
                      (pEVar1,e,pEVar1->klass[1]._0.image);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Select
               (MVSimpleOneSeatVehicle *this,Color color,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).AddSelectionBox.method)
            (this,(this->klass->vtable).RemoveSelectionBox.methodPtr);
  return;
}


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_SetCurrentItemState
               (MVSimpleOneSeatVehicle *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields).CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  obscuredValue =
       ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                 ((Object *)aNewState,(MethodInfo *)0x0);
  pOVar3 = (pMVar1->fields).value;
  (pMVar1->fields).value = obscuredValue;
  if (pOVar3 != obscuredValue) {
    pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(pMVar1->fields).OnChange;
    if (pSVar4 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         (obscuredValue,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar4,pOVar3,(MethodInfo *)0x0);
    }
    if (((pMVar1->fields).writeThrough != 0) &&
       (pSVar4 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(pMVar1->fields).OnWriteThrough
       , pSVar4 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar4,pOVar3,(MethodInfo *)0x0);
    }
  }
  return;
}


/* MVSimpleOneSeatVehicle(Dictionary`2[System.Object,System.Object], VehicleBaseObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
               (MVSimpleOneSeatVehicle *this,Dictionary_2_System_Object_System_Object_ *data,
               VehicleBaseObject *_vehiclePrefab,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)_vehiclePrefab,worldObjects,
             (MethodInfo *)0x0);
  pVVar1 = (VehicleBaseObject *)(this->fields)._._._._.component;
  if (pVVar1 == (VehicleBaseObject *)0x0) {
    pVVar2 = (VehicleBaseObject *)0x0;
  }
  else {
    bVar3 = (TypeInfo__VehicleBaseObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__VehicleBaseObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pVVar2 = (VehicleBaseObject *)0x0;
    if (bVar4) {
      pVVar2 = pVVar1;
    }
    if (pVVar2 == (VehicleBaseObject *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (this->fields)._.vehicleBaseObject = pVVar2;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
      pSVar6 = (String *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,pSVar5 == pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVRuntimeDataVariableClampedFloat get_Shield() */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_get_Shield
          (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  return (this->fields).shield;
}


/* Void set_Shield(MVRuntimeDataVariableClampedFloat) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_set_Shield
               (MVSimpleOneSeatVehicle *this,MVRuntimeDataVariableClampedFloat *value,
               MethodInfo *method)

{
  (this->fields).shield = value;
  return;
}

