
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddPreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar1,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient_CreateBox(this,StringLiteral_PreviewBox,1.005,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (UseInteratorVisualization__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__
                          );
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      material = PrefabPool::PrefabPool_get_PreviewBoxMaterial(this_01,(MethodInfo *)0x0);
      corners = MVWorldObjectClient_GetBoundsCornersLocal
                          (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
      if (this_00 != (UseInteratorVisualization__Array *)0x0) {
        PreviewBox::PreviewBox_Show((PreviewBox *)this_00,material,corners,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar1,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient_CreateBox
                         (this,StringLiteral_SelectionBox,1.001,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (UseInteratorVisualization__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                          );
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      material = PrefabPool::PrefabPool_get_SelectBoxMaterial(this_01,(MethodInfo *)0x0);
      corners = MVWorldObjectClient_GetBoundsCornersLocal
                          (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
      if (this_00 != (UseInteratorVisualization__Array *)0x0) {
        SelectionBox::SelectionBox_FadeIn
                  ((SelectionBox *)this_00,0.2,material,corners,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ApplyData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ApplyData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffffb);
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar4 = (int32_t *)func_?(pPVar2);
  (this->fields)._.id = *piVar4;
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffffa);
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar4 = (int32_t *)func_?(pPVar2);
  (this->fields)._.groupId = *piVar4;
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffff9);
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar4 = (int32_t *)func_?(pPVar2);
  (this->fields)._.itemId = *piVar4;
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffff8);
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar3 = CONCAT44(TypeInfo__MV__WorldObject__WorldObjectType,pPVar2);
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class !=
      (TypeInfo__MV__WorldObject__WorldObjectType->_0).element_class) goto code_?;
  puVar5 = (undefined4 *)func_?(pPVar2);
  AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
            ((AvatarPickupOwner *)this,(HashSet_1_System_Int32_ *)*puVar5,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   &stack0xfffffff7);
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar3 = CONCAT44(TypeInfo__UnityEngine__Vector3,pPVar2);
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class != (TypeInfo__UnityEngine__Vector3->_0).element_class)
  goto code_?;
  pVVar6 = (Vector3 *)func_?(pPVar2);
  uVar3._0_4_ = pVVar6->x;
  uVar3._4_4_ = pVVar6->y;
  fVar7 = pVVar6->z;
  bVar8 = MathFunctions::MathFunctions_VectorIsNan(*pVVar6,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Nan_scale_detected,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar6->x;
    uVar3._4_4_ = pVVar6->y;
    fVar7 = pVVar6->z;
  }
  this_00 = (this->fields).transform;
  if (this_00 == (Transform *)0x0) goto code_?;
  value.z = fVar7;
  value.x = (float)uVar3;
  value.y = SUB84(uVar3,4);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            (this_00,value,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   (int)&data + 3);
  pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pPVar2 = pPVar9;
  if (pPVar9 == (Pool *)0x0) {
code_?:
    PickupItem::PickupItem_set_VariantID((PickupItem *)this,(int32_t)pPVar2,(MethodInfo *)0x0);
    pSVar10 = (String *)func_?();
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_01,pSVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 == 0) {
      in_stack_11 = &UNK_?;
      worldObjectType =
           System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
           Object,System::Object]::
           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *
                      )this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
      RuntimeVariablesRepository_GetRuntimeVariables
                ((WorldObjectType__Enum)worldObjectType,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).set_RunTimeData.method)();
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(8,data._0_3_);
      in_stack_11 = &UNK_?;
      pTVar1 = (Type *)func_?();
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        bVar12 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pPVar2->klass->_1).naturalAligment < bVar12) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pPVar2->klass->_1).typeHierarchy[bVar12 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        pPVar9 = (Pool *)0x0;
        if (bVar13) {
          pPVar9 = pPVar2;
        }
        if (pPVar9 == (Pool *)0x0) goto code_?;
      }
      (*(code *)(this->klass->vtable).set_RunTimeData.method)();
    }
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    pSVar10 = (String *)func_?();
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_01,pSVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
      pTVar1 = (Type *)func_?();
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar5 = (undefined4 *)func_?(pPVar2);
      DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                ((DesktopEditModeController *)this,(EditorStateMachine *)*puVar5,(MethodInfo *)0x0);
    }
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(10,data._0_3_);
    pSVar10 = (String *)func_?();
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_01,pSVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 == 0) {
      return;
    }
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(10,data._0_3_);
    pTVar1 = (Type *)func_?();
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int32_t *)func_?(pPVar2);
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                ((RuntimePrototypeCubeModel *)this,*piVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar12 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pPVar9->klass->_1).naturalAligment < bVar12) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pPVar9->klass->_1).typeHierarchy[bVar12 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pPVar2 = (Pool *)0x0;
    if (bVar13) {
      pPVar2 = pPVar9;
    }
    if (pPVar2 != (Pool *)0x0) goto code_?;
code_?:
    uVar3 = func_?();
  }
code_?:
  func_?(uVar3);
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Clone
          (MVWorldObjectClient *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pOVar2 = (Object *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  pSVar3 = (String *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     (pOVar2,(MethodInfo *)0x0);
  pSVar4 = pSVar3;
  if (pSVar3 != (String *)0x0) {
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pSVar3->klass->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pSVar3->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pSVar4 = (String *)0x0;
    if (bVar6) {
      pSVar4 = pSVar3;
    }
    if (pSVar4 == (String *)0x0) {
      func_?(pSVar3,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      goto code_?;
    }
  }
  MVNetworkGame::MVNetworkGame_set_KogamaMainpageURL
            ((MVNetworkGame *)pMVar1,pSVar4,(MethodInfo *)0x0);
  this_01 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
            MVWorldObject_DeepCopyWorldObjectDataParameters
                      ((MVWorldObject *)pMVar1,(MethodInfo *)0x0);
  pOVar7 = PrefabPool::PrefabPool_get_MVCameraSettingsPrefab
                     ((PrefabPool *)pMVar1,(MethodInfo *)0x0);
  (*(code *)(pMVar1->klass->vtable).set_RunTimeData.method)
            (pMVar1,pOVar7,(pMVar1->klass->vtable).get_HasOutputConnector.methodPtr);
  this = (MVWorldObjectClient *)((uint)this & 0xffffff);
  key = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel___Class *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&this + 3);
  pCVar8 = cloneBookkeeping;
  if (cloneBookkeeping != (CloneBookkeeping *)0x0) {
    pTVar9 = (Theme *)func_?();
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_01,(String *)key,pTVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pWVar10 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
      pSVar4 = (String *)func_?();
      pTVar9 = (Theme *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pWVar10,pSVar4,pTVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0
                         );
      if ((pOVar2 == (Object *)0xffffffff) && (ownerActorNumber == 0)) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)StringLiteral_This_is_a_hack_created_for_spawn;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
        method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
        pSVar4 = (String *)func_?();
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xffffffec;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32;
        cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
        cloneGroupId = func_?();
        this = (MVWorldObjectClient *)pWVar10;
        cloneBookkeeping =
             (CloneBookkeeping *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
        ;
        ownerActorNumber = (int32_t)pSVar4;
        pWVar10 = (WorldObjectDataParameters__Enum__Class *)this;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)this,pSVar4,(Theme *)cloneGroupId,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      else {
        method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
        key_00 = (CloneBookkeeping *)func_?();
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xffffffec;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32;
        cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)func_?();
        cloneGroupId = (int32_t)pWVar10;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
        ;
        ownerActorNumber = (int32_t)&UNK_?;
        cloneBookkeeping = key_00;
        pWVar10 = (WorldObjectDataParameters__Enum__Class *)cloneGroupId;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)cloneGroupId,(String *)key_00,
                   (Theme *)worldObjects,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      pSVar4 = (String *)func_?();
      pTVar9 = (Theme *)func_?();
      method = (MethodInfo *)pWVar10;
      prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
      pWVar10 = (WorldObjectDataParameters__Enum__Class *)method;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)method,pSVar4,pTVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      method = (MethodInfo *)pMVar1;
      prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar1,(MethodInfo *)0x0);
      method = (MethodInfo *)TypeInfo__System__Int32;
      prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
      pTVar9 = (Theme *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pWVar10,pSVar4,pTVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      wo = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                     ((Dictionary_2_System_Object_System_Object_ *)pWVar10,worldObjects,prototypes,
                      (MethodInfo *)0x0);
      if ((wo != (MVWorldObjectClient *)0x0) &&
         (this_00 = (pCVar8->fields).worldObjectIdsMaps,
         this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__Add
                  (this_00,(pMVar1->fields)._.id,(wo->fields)._.id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(this_02,wo,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                    ((MVWorldObject *)pMVar1,(pCVar8->fields).linkIds,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                    ((MVWorldObject *)pMVar1,(pCVar8->fields).objectLinkIds,(MethodInfo *)0x0);
          (pCVar8->fields).cloneIdIncrement = (pCVar8->fields).cloneIdIncrement + 1;
          return wo;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar11)();
  return pMVar1;
}


/* Single ComputeObjectRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  (*(code *)(this->klass->vtable).GetLocalBounds.method)
            (auStack_3,this,3,(this->klass->vtable).Select.methodPtr);
  puVar4 = (undefined8 *)func_?(&VStack_5,&stack0xffffffb8,0);
  uStack_6 = *puVar4;
  fVar7 = *(float *)(puVar4 + 1);
  pVVar8 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_Scale.method)
                     (&VStack_5,this,(this->klass->vtable).set_Scale.methodPtr);
  a.z = fVar7;
  a.x = (float)(undefined4)uStack_6;
  a.y = (float)uStack_6._4_4_;
  pVVar8 = MathFunctions::MathFunctions_Multiply(&VStack_5,a,*pVVar8,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar8->x;
  uStack_6._4_4_ = pVVar8->y;
  fVar7 = pVVar8->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.z = fVar7;
  a_00.x = (float)(undefined4)uStack_6;
  a_00.y = (float)uStack_6._4_4_;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_5,a_00,0.5,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar8->x;
  uStack_2._4_4_ = pVVar8->y;
  fStack_1 = pVVar8->z;
  fVar9 = (float10)func_?();
  return (float)fVar9;
}


/* Single ComputeObjectSqrRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectSqrRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  (*(code *)(this->klass->vtable).GetLocalBounds.method)
            (auStack_3,this,3,(this->klass->vtable).Select.methodPtr);
  puVar4 = (undefined8 *)func_?(&VStack_5,&stack0xffffffb8,0);
  uStack_6 = *puVar4;
  fVar7 = *(float *)(puVar4 + 1);
  pVVar8 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_Scale.method)
                     (&VStack_5,this,(this->klass->vtable).set_Scale.methodPtr);
  a.z = fVar7;
  a.x = (float)(undefined4)uStack_6;
  a.y = (float)uStack_6._4_4_;
  pVVar8 = MathFunctions::MathFunctions_Multiply(&VStack_5,a,*pVVar8,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar8->x;
  uStack_6._4_4_ = pVVar8->y;
  fVar7 = pVVar8->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.z = fVar7;
  a_00.x = (float)(undefined4)uStack_6;
  a_00.y = (float)uStack_6._4_4_;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_5,a_00,0.5,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar8->x;
  uStack_2._4_4_ = pVVar8->y;
  fStack_1 = pVVar8->z;
  fVar9 = (float10)func_?();
  return (float)fVar9;
}


/* GameObject CreateBox(String, Single) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateBox
          (MVWorldObjectClient *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,name,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameObject;
    if (this_00 != (GameObject *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          d = pVVar3->x;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,*pVVar3,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,*pQVar4,(MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                               ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xfffffff0,*pVVar3,(float)d,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar2,*pVVar3,(MethodInfo *)0x0);
              return pGVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar5)();
  return pGVar1;
}


/* Void CreateConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pSVar3 = (SentryGunBeam *)
             PrefabPool::PrefabPool_get_LogicInputConnectorPrefab(pPVar2,(MethodInfo *)0x0);
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_InputConnectorOffset.method)
                       (&QStack_5.y,this,(this->klass->vtable).get_OutputConnectorOffset.methodPtr)
    ;
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       (&QStack_5,(MethodInfo *)0x0);
    QStack_5.x = pQVar8->x;
    QStack_5.y = pQVar8->y;
    QStack_5.z = pQVar8->z;
    QStack_5.w = pQVar8->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar7;
    position.x = (float)(undefined4)uStack_6;
    position.y = (float)uStack_6._4_4_;
    rotation.y = QStack_5.y;
    rotation.x = QStack_5.x;
    rotation.z = QStack_5.z;
    rotation.w = QStack_5.w;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                       (pSVar3,position,rotation,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).inputConnectorObject = (GameObject *)pSVar3;
    if (pSVar3 == (SentryGunBeam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)pSVar3,(MethodInfo *)0x0);
    pGVar10 = (this->fields).gameObject;
    if ((pGVar10 == (GameObject *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar10,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar11,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pSVar3 = (SentryGunBeam *)
             PrefabPool::PrefabPool_get_LogicOutputConnectorPrefab(pPVar2,(MethodInfo *)0x0);
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_OutputConnectorOffset.method)
                       (&QStack_5.y,this,(this->klass->vtable).get_ObjectConnectorOffset.methodPtr)
    ;
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       (&QStack_5,(MethodInfo *)0x0);
    QStack_5.x = pQVar8->x;
    QStack_5.y = pQVar8->y;
    QStack_5.z = pQVar8->z;
    QStack_5.w = pQVar8->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position_00.z = fVar7;
    position_00.x = (float)(undefined4)uStack_6;
    position_00.y = (float)uStack_6._4_4_;
    rotation_00.y = QStack_5.y;
    rotation_00.x = QStack_5.x;
    rotation_00.z = QStack_5.z;
    rotation_00.w = QStack_5.w;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                       (pSVar3,position_00,rotation_00,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).outputConnectorObject = (GameObject *)pSVar3;
    if (pSVar3 == (SentryGunBeam *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)pSVar3,(MethodInfo *)0x0);
    pGVar10 = (this->fields).gameObject;
    if ((pGVar10 == (GameObject *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar10,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar11,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 == '\0') {
    return;
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar2 != (PrefabPool *)0x0) {
    pSVar3 = (SentryGunBeam *)
             PrefabPool::PrefabPool_get_LogicObjectConnectorPrefab(pPVar2,(MethodInfo *)0x0);
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_ObjectConnectorOffset.method)
                       (&QStack_5.y,this,
                        (this->klass->vtable).get_ObjectConnectorRotation.methodPtr);
    uStack_6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    pfVar12 = (float *)(*(code *)(this->klass->vtable).get_ObjectConnectorRotation.method)
                                 (&QStack_5,this,
                                  (this->klass->vtable).get_DocumentationType.methodPtr);
    QStack_5.x = *pfVar12;
    QStack_5.y = pfVar12[1];
    QStack_5.z = pfVar12[2];
    QStack_5.w = pfVar12[3];
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position_01.z = fVar7;
    position_01.x = (float)(undefined4)uStack_6;
    position_01.y = (float)uStack_6._4_4_;
    rotation_01.y = QStack_5.y;
    rotation_01.x = QStack_5.x;
    rotation_01.z = QStack_5.z;
    rotation_01.w = QStack_5.w;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                       (pSVar3,position_01,rotation_01,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
    (this->fields).objectConnectorObject = (GameObject *)pSVar3;
    if (pSVar3 != (SentryGunBeam *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pSVar3,(MethodInfo *)0x0);
      pGVar10 = (this->fields).gameObject;
      if ((pGVar10 != (GameObject *)0x0) &&
         (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar10,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar9,pTVar11,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void CreateWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient_CreateConnectors(this,(MethodInfo *)0x0);
  MVWorldObjectClient_ApplyData(this,data,(MethodInfo *)0x0);
  this_00 = (this->fields).gameObject;
  value = (String *)
          (*(code *)(this->klass->vtable).ToString.method)
                    (this,(this->klass->vtable).get_Position.methodPtr);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)this_00,value,(MethodInfo *)0x0);
    this_01 = (MVRuntimeDataVariables *)func_?();
    MVRuntimeDataVariables::MVRuntimeDataVariables__ctor(this_01,this,(MethodInfo *)0x0);
    key = (this->fields)._.groupId;
    (this->fields).runtimeDataVariables = this_01;
    if (key == -1) {
code_?:
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame *)0x0) {
        this_03 = (MVItemBusinessLogic *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_02,
                             (MethodInfo *)0x0);
        if (this_03 != (MVItemBusinessLogic *)0x0) {
          bVar1 = MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
                            (this_03,(this->fields)._.itemId,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            uVar2 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
            piVar3 = &(this->fields).interactionFlags;
            *(uint *)piVar3 = (uint)*piVar3 | 0x4000;
            *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar2;
          }
          return;
        }
      }
    }
    else if (worldObjects != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pMVar4 = (MVGroup *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)worldObjects,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pMVar4 == (MVGroup *)0x0) {
        pMVar5 = (MVGroup *)0x0;
      }
      else {
        bVar6 = (TypeInfo__MVGroup->_1).naturalAligment;
        if (((pMVar4->klass->_1).naturalAligment < bVar6) ||
           ((MVGroup__Class *)(pMVar4->klass->_1).typeHierarchy[bVar6 - 1] != TypeInfo__MVGroup)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pMVar5 = (MVGroup *)0x0;
        if (bVar7) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVGroup *)0x0) goto code_?;
      }
      (this->fields).group = pMVar5;
      if (pMVar5 != (MVGroup *)0x0) {
        (*(code *)(pMVar5->klass->vtable).AddChild.method)(pMVar5);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DeSelect
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).selectedConnector = 0;
  (*(code *)(pMVar1->vtable).RemoveSelectionBox.method)
            (this,(pMVar1->vtable).RemovePreviewBox.methodPtr);
  if ((this->fields).selected != 0) {
    pMVar1 = this->klass;
    (this->fields).selected = 0;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,0,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Delete
               (MVWorldObjectClient *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (worldObjectClientManager,(this->fields)._.id,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Destroy
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).gameObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  }
  if ((this->fields).initializedFromInventory != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (pRVar4 = (RuntimeVariableNetworkManager *)
               ShootableButton::ShootableButton_get_InputSignalReceiver
                         ((ShootableButton *)pMVar3,(MethodInfo *)0x0),
     pRVar4 != (RuntimeVariableNetworkManager *)0x0)) {
    bVar2 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                      (pRVar4,(this->fields)._.id,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pRVar4 = (RuntimeVariableNetworkManager *)
                 ShootableButton::ShootableButton_get_InputSignalReceiver
                           ((ShootableButton *)pMVar3,(MethodInfo *)0x0),
       pRVar4 != (RuntimeVariableNetworkManager *)0x0)) {
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                (pRVar4,(this->fields)._.id,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DestroyRecursive(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (wo != (MVWorldObjectClient *)0x0) {
    pMVar8 = wo->klass;
    bStack_9 = (pMVar8->_1).naturalAligment;
    bVar10 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((bStack_9 < bVar10) ||
       ((MVGroup__Class *)(pMVar8->_1).typeHierarchy[bVar10 - 1] != TypeInfo__MVGroup)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    pMVar12 = (MVWorldObjectClient *)0x0;
    if (bVar11) {
      pMVar12 = wo;
    }
    puStack_7 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    if (pMVar12 != (MVWorldObjectClient *)0x0) {
      bStack_13 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((bStack_9 < bStack_13) ||
         (cStack_14 = '\x01',
         (MVGroup__Class *)(pMVar8->_1).typeHierarchy[bStack_13 - 1] != TypeInfo__MVGroup)) {
        cStack_14 = '\0';
      }
      pMVar12 = (MVWorldObjectClient *)0x0;
      if (cStack_14 != '\0') {
        pMVar12 = wo;
      }
      pMVar15 = TypeInfo__MVGroup;
      puStack_7 = (undefined4 *)&stack0xffffffb4;
      puStack_4 = &stack0xffffffb4;
      if (pMVar12 == (MVWorldObjectClient *)0x0) goto code_?;
      if ((bStack_9 < bStack_13) ||
         ((MVGroup__Class *)(pMVar8->_1).typeHierarchy[bStack_13 - 1] != TypeInfo__MVGroup)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      this = (MVGroup *)0x0;
      if (bVar11) {
        this = (MVGroup *)wo;
      }
      puStack_7 = (undefined4 *)&stack0xffffffb4;
      puStack_4 = &stack0xffffffb4;
      if (this == (MVGroup *)0x0) goto code_?;
      puStack_7 = (undefined4 *)&stack0xffffffb4;
      puStack_4 = &stack0xffffffb4;
      this_00 = (List_1_UnityEngine_Color32_ *)MVGroup::MVGroup_get_Children(this,(MethodInfo *)0x0)
      ;
      if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_17,this_00,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                         );
      LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar16->l;
      LStack_6.monitor = (MonitorData *)pLVar16->next;
      LStack_6.fields._items = (Color32__Array *)pLVar16->ver;
      LStack_6.fields._size = (pLVar16->current).rgba;
      uStack_1 = 0;
      while( true ) {
        auStack_17._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
        ;
        auStack_17._0_4_ = &LStack_6;
        cVar18 = func_?();
        if (cVar18 == '\0') break;
        pMVar12 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                           );
        if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
          func_?();
        }
        MVWorldObjectClient_DestroyRecursive(pMVar12,(MethodInfo *)0x0);
      }
      *puStack_7 = 0x4e;
      uStack_1 = 0xffffffff;
      func_?(&LStack_6);
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      (*(code *)(wo->klass->vtable).Destroy.method)(wo,(wo->klass->vtable).OnDataUpdate.methodPtr);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  pMVar15 = extraout_EDX;
code_?:
  func_?(wo,pMVar15);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean DoesScreenPointHitCollider(Vector3, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DoesScreenPointHitCollider
               (MVWorldObjectClient *this,Vector3 point,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = (Camera *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (Camera *)0x0) {
      pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                         ((Ray *)&stack0xffffffcc,this_01,point,(MethodInfo *)0x0);
      uVar2 = (pRVar1->m_Origin).x;
      uVar3 = (pRVar1->m_Origin).y;
      ray.m_Origin.y = (float)uVar3;
      ray.m_Origin.x = (float)uVar2;
      fVar4 = (pRVar1->m_Origin).z;
      fVar5 = (pRVar1->m_Direction).x;
      uVar6 = (pRVar1->m_Direction).y;
      uVar7 = (pRVar1->m_Direction).z;
      ray.m_Direction.z = (float)uVar7;
      ray.m_Direction.y = (float)uVar6;
      if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
        func_?();
      }
      ray.m_Origin.z = fVar4;
      ray.m_Direction.x = fVar5;
      iVar8 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastNonAlloc_3
                        (ray,TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer,
                         (MethodInfo *)0x0);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
            func_?();
          }
          if (TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer ==
              (RaycastHit__Array *)0x0) goto code_?;
          func_?();
          x = (Object_1 *)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x,(Object_1 *)collider,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            return 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Vector3[] GetBoundsCornersLocal(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)
           (*(code *)(this->klass->vtable).GetLocalBounds.method)
                     (auStack_2,this,boundsContext,(this->klass->vtable).Select.methodPtr);
  uStack_3 = *puVar1;
  uStack_4 = puVar1[1];
  uStack_5 = puVar1[2];
  uStack_6 = puVar1[3];
  uStack_7 = *(undefined8 *)(puVar1 + 4);
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  bounds.m_Center.y = (float)uStack_4;
  bounds.m_Center.x = (float)uStack_3;
  bounds.m_Center.z = (float)uStack_5;
  bounds.m_Extents.x = (float)uStack_6;
  bounds.m_Extents.y = (float)(int)uStack_7;
  bounds.m_Extents.z = (float)((ulonglong)uStack_7 >> 0x20);
  pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_1(bounds,(MethodInfo *)0x0);
  return pVVar8;
}


/* Vector3[] GetBoundsCornersWorld(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersWorld
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVWorldObjectClient___GetBoundsCornersWorld_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
    fVar3 = pMVar2->m10;
    fVar4 = pMVar2->m20;
    fVar5 = pMVar2->m30;
    fVar6 = pMVar2->m01;
    pTVar1 = (Transform *)pMVar2->m11;
    fVar7 = pMVar2->m21;
    pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pMVar2->m31;
    pSVar9 = (ScaleAnimationBase__Class *)pMVar2->m02;
    pMVar10 = (MonitorData *)pMVar2->m12;
    pvVar11 = (void *)pMVar2->m22;
    fVar12 = pMVar2->m32;
    fVar13 = pMVar2->m03;
    fVar14 = pMVar2->m13;
    fVar15 = pMVar2->m23;
    pTVar16 = (Transform *)pMVar2->m33;
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (void *)pMVar2->m00;
      (this_00->fields).state = (int32_t)fVar3;
      (this_00->fields).originalScale.x = fVar4;
      (this_00->fields).originalScale.y = fVar5;
      (this_00->fields).originalScale.z = fVar6;
      (this_00->fields).target = pTVar1;
      (this_00->fields).testState = (int32_t)fVar7;
      (this_00->fields).OnScaleAnimationStopped = pSVar8;
      this_00[1].klass = pSVar9;
      this_00[1].monitor = pMVar10;
      this_00[1].fields._._._._.m_CachedPtr = pvVar11;
      this_00[1].fields.state = (int32_t)fVar12;
      this_00[1].fields.originalScale.x = fVar13;
      this_00[1].fields.originalScale.y = fVar14;
      this_00[1].fields.originalScale.z = fVar15;
      this_00[1].fields.target = pTVar16;
      pVVar17 = MVWorldObjectClient_GetBoundsCornersLocal(this,boundsContext,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__MVWorldObjectClient___GetBoundsCornersWorld_c__AnonStorey1____m__0_UnityEngine__Vector3_
                 ,
                 MethodInfo__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>__Func_System__Object__void__
                );
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                         ((IEnumerable_1_System_Object_ *)pVVar17,(Func_2_Object_Single_ *)this_01,
                          System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_MethodInfo__System__Linq__Enumerable__Select<UnityEngine::Vector3,_UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>_
                         );
      pVVar17 = (Vector3__Array *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                          ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                           UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
                          );
      return pVVar17;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pVVar17 = (Vector3__Array *)(*pcVar18)();
  return pVVar17;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      fVar4 = pQVar3->x;
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        puVar5 = &UNK_?;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar6 = (Vector3 *)&stack0xffffffe8;
          puVar7 = &UNK_?;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             (pVVar6,pTVar2,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar8->x;
          uVar9._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            puVar11 = &UNK_?;
            pSVar12 = TypeInfo__SharedCubeFunctions;
            func_?();
            uVar9 = CONCAT44(pSVar12,puVar11);
          }
          worldPosition.z = position.z;
          worldPosition.x = position.x;
          worldPosition.y = position.y;
          rotation.y = (float)puVar5;
          rotation.x = fVar4;
          rotation.z = (float)puVar7;
          rotation.w = (float)pVVar6;
          scale.z = fVar10;
          scale.x = (float)(int)uVar9;
          scale.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          pVVar6 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                             (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
          fVar10 = pVVar6->y;
          fVar4 = pVVar6->z;
          __return_storage_ptr__->x = pVVar6->x;
          __return_storage_ptr__->y = fVar10;
          __return_storage_ptr__->z = fVar4;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar13)();
  return pVVar6;
}


/* MVWorldObjectClient GetHitInteractionHandlingWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
          (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this;
code_?:
  this = pMVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  switch((this->fields)._PlayInteractionType_k__BackingField) {
  default:
    return (MVWorldObjectClient *)0x0;
  case 1:
    return this;
  case 2:
    break;
  }
  pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      (MethodInfo *)0x0);
  if (pOVar2 == (Object *)0xffffffff) {
    context = (this->fields).gameObject;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
              ((Object *)StringLiteral_WorldObject_has_ParentHandlesHit,(Object_1 *)context,
               (MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      (MethodInfo *)0x0);
  pbVar3 = (byte *)0x0;
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(int32_t)pOVar2,(MethodInfo *)0x0), unaff_EBP = in_stack_4,
     pbVar3 = in_stack_5, pMVar1 == (MVWorldObjectClient *)0x0)) {
    bVar6 = 0;
    puStack7 = (undefined *)func_?();
    bVar8 = (char)puStack7 - 1;
    bVar9 = *pbVar3 + bVar8;
    bVar10 = CARRY1(*pbVar3,bVar8) || CARRY1(bVar9,bVar6);
    *pbVar3 = bVar9 + bVar6;
    pbVar3 = pbVar3 + (int)&this->klass;
    bVar9 = *pbVar3;
    bVar8 = *pbVar3;
    *pbVar3 = bVar8 + extraout_CL + bVar10;
    *(char *)((int)puStack7 + 0x3b) =
         *(char *)((int)puStack7 + 0x3b) + extraout_DL +
         (CARRY1(bVar9,extraout_CL) || CARRY1(bVar8 + extraout_CL,bVar10));
    pcVar11 = (code *)swi(3);
    pMVar1 = (MVWorldObjectClient *)(*pcVar11)();
    return pMVar1;
  }
  goto code_?;
}


/* Vector3 GetInputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).inputConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    arg0 = (Object *)
           (*(code *)(pTVar1->klass->vtable).__unknown.method)
                     (pTVar1,(pTVar1->klass->vtable).get_ReflectedType.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Format
                        (StringLiteral_GetLocalBounds_has_not_been_impl,arg0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&puStack_3,(MethodInfo *)0x0);
    __return_storage_ptr___00 = pVVar2->x;
    method_00 = pVVar2->y;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)__return_storage_ptr___00,(MethodInfo *)method_00);
    (__return_storage_ptr__->m_Center).x = 0.0;
    (__return_storage_ptr__->m_Center).y = 0.0;
    (__return_storage_ptr__->m_Center).z = 0.0;
    (__return_storage_ptr__->m_Extents).x = 0.0;
    (__return_storage_ptr__->m_Extents).y = 0.0;
    (__return_storage_ptr__->m_Extents).z = 0.0;
    func_?();
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pBVar5 = (Bounds *)(*pcVar4)();
  return pBVar5;
}


/* Vector3 GetObjectConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).objectConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetOutputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields).gameObject;
  }
  else {
    this_00 = (this->fields).outputConnectorObject;
  }
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (this_00,
                         UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (this_02 == (UseInteratorVisualization__Array *)0x0) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                (&BStack_2,(Collider *)this_02,(MethodInfo *)0x0);
      pVVar3 = (Vector3 *)func_?();
    }
    else {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Did_not_find_collider__Using_tra,(Object *)this,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
      this_01 = (this->fields).transform;
      if (this_01 == (Transform *)0x0) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&BStack_2.m_Extents,this_01,(MethodInfo *)0x0);
    }
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar6)();
  return pVVar3;
}


/* MVWorldObjectClient+TransformData GetTransformData(Dictionary`2[System.Object,System.Object]) */

MVWorldObjectClient_TransformData *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTransformData
          (MVWorldObjectClient_TransformData *__return_storage_ptr__,MVWorldObjectClient *this,
          Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 4;
  pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_1);
  this_00 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__UnityEngine__Vector3,pPVar3);
    if (pPVar3 != (Pool *)0x0) {
      if ((pPVar3->klass->_0).element_class != (TypeInfo__UnityEngine__Vector3->_0).element_class)
      goto code_?;
      pVVar5 = (Vector3 *)func_?(pPVar3);
      fVar6 = pVVar5->z;
      method_00 = pVVar5->y;
      bVar7 = MathFunctions::MathFunctions_VectorIsNan(*pVVar5,(MethodInfo *)method_00);
      if (bVar7 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Nan_position_detected,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
        fVar6 = pVVar5->z;
      }
      data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(5,data._0_3_);
      pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                       (int)&data + 3);
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__UnityEngine__Quaternion,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class ==
            (TypeInfo__UnityEngine__Quaternion->_0).element_class) {
          pQVar8 = (Quaternion *)func_?(pPVar3);
          fVar9 = pQVar8->x;
          fVar10 = pQVar8->y;
          fVar11 = pQVar8->z;
          fVar12 = pQVar8->w;
          fVar13 = 0.0;
          fVar14 = pQVar8->w;
          bVar7 = MathFunctions::MathFunctions_QuaternionIsNan(*pQVar8,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Nan_rotation_detected,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0);
            fVar9 = pQVar8->x;
            fVar10 = pQVar8->y;
            fVar11 = pQVar8->z;
            fVar12 = pQVar8->w;
          }
          (__return_storage_ptr__->position).x = fVar14;
          (__return_storage_ptr__->position).y = fVar13;
          (__return_storage_ptr__->position).z = fVar6;
          (__return_storage_ptr__->rotation).x = fVar9;
          (__return_storage_ptr__->rotation).y = fVar10;
          (__return_storage_ptr__->rotation).z = fVar11;
          (__return_storage_ptr__->rotation).w = fVar12;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar15 = (code *)swi(3);
  pMVar16 = (MVWorldObjectClient_TransformData *)(*pcVar15)();
  return pMVar16;
}


/* Boolean HasInteractionFlag(InteractionFlags) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
               (MVWorldObjectClient *this,InteractionFlags__Enum flag,MethodInfo *method)

{
  if ((((InteractionFlags__Enum)(this->fields).interactionFlags & flag) == flag) &&
     ((MethodInfo *)(*(uint *)((int)&(this->fields).interactionFlags + 4) & (uint)method) == method)
     ) {
    return 1;
  }
  return 0;
}


/* Void HideConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HideConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void HighlightConnector(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HighlightConnector
               (MVWorldObjectClient *this,bool state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).selectedConnector;
  if (iVar1 == 0) {
    pGVar2 = (this->fields).outputConnectorObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pGVar2 = (this->fields).outputConnectorObject;
      if ((pGVar2 == (GameObject *)0x0) ||
         (pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_29
                             (pGVar2,
                              UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                             ), pUVar4 == (UseInteratorVisualization__Array *)0x0))
      goto code_?;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_1_GetComponentInChildren_12
                         ((Component_1 *)pUVar4,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      if (state == 0) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar6 == (PrefabPool *)0x0) goto code_?;
        pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial(pPVar6,(MethodInfo *)0x0)
        ;
      }
      else {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar6 == (PrefabPool *)0x0) goto code_?;
        pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueSelectedMaterial
                           (pPVar6,(MethodInfo *)0x0);
      }
      if (pTVar5 == (Text *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pTVar5,pMVar7,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).inputConnectorObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pGVar2 = (this->fields).inputConnectorObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar2,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           ), pUVar4 == (UseInteratorVisualization__Array *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
             Component_1_GetComponentInChildren_12
                       ((Component_1 *)pUVar4,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
joined_?:
    if (bVar3 != 0) {
      return;
    }
    if (state == 0) {
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar6 == (PrefabPool *)0x0) goto code_?;
      pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial(pPVar6,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar6 == (PrefabPool *)0x0) goto code_?;
      pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedSelectedMaterial
                         (pPVar6,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 == 1) {
      pGVar2 = (this->fields).inputConnectorObject;
      if ((pGVar2 == (GameObject *)0x0) ||
         (pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_29
                             (pGVar2,
                              UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                             ), pUVar4 == (UseInteratorVisualization__Array *)0x0))
      goto code_?;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_1_GetComponentInChildren_12
                         ((Component_1 *)pUVar4,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      goto joined_?;
    }
    if (iVar1 != 2) {
      return;
    }
    pGVar2 = (this->fields).outputConnectorObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar2,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           ), pUVar4 == (UseInteratorVisualization__Array *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
             Component_1_GetComponentInChildren_12
                       ((Component_1 *)pUVar4,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    if (state == 0) {
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar6 == (PrefabPool *)0x0) goto code_?;
      pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial(pPVar6,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar6 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar6 == (PrefabPool *)0x0) goto code_?;
      pMVar7 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueSelectedMaterial
                         (pPVar6,(MethodInfo *)0x0);
    }
  }
  if (pTVar5 != (Text *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pTVar5,pMVar7,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Initialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    (*(code *)(this->klass->vtable).AddPreviewBox.method)
              (this,(this->klass->vtable).AddSelectionBox.methodPtr);
    uVar2 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
    piVar3 = &(this->fields).interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x20000;
    *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar2;
  }
  return;
}


/* GameObject InstantiatePrefab(GameObject, MVWorldObjectClient+TransformData) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab
          (MVWorldObjectClient *this,GameObject *prefabObject,
          MVWorldObjectClient_TransformData transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                      ((SentryGunBeam *)prefabObject,transformData.position,transformData.rotation,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                      );
  if (this_00 != (SentryGunBeam *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    (this->fields).goId = iVar2;
    return (GameObject *)this_00;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameObject *)(*pcVar3)();
  return pGVar4;
}


/* ObjectPrefab InstantiatePrefab(ObjectPrefab, MVWorldObjectClient+TransformData) */

ObjectPrefab *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab_1
          (MVWorldObjectClient *this,ObjectPrefab *prefabObject,
          MVWorldObjectClient_TransformData transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                      ((SentryGunBeam *)prefabObject,transformData.position,transformData.rotation,
                       ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                      );
  if (this_00 != (SentryGunBeam *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)this_01,(MethodInfo *)0x0);
      (this->fields).goId = iVar2;
      return (ObjectPrefab *)this_00;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (ObjectPrefab *)(*pcVar3)();
  return pOVar4;
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).initializedFromInventory = 1;
  (*(code *)(pMVar1->vtable).InitializeInventory.method)
            (this,(pMVar1->vtable).PlayModeInitialize.methodPtr);
  return;
}


/* Boolean IsPointOverInputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverInputConnector
               (MVWorldObjectClient *this,Vector3 mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    this_00 = (this->fields).inputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      collider = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           );
      bVar2 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,mousePoint,(Collider *)collider,(MethodInfo *)0x0);
      return bVar2;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Boolean IsPointOverOutputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverOutputConnector
               (MVWorldObjectClient *this,Vector3 mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    this_00 = (this->fields).outputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      collider = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (this_00,
                            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                           );
      bVar2 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,mousePoint,(Collider *)collider,(MethodInfo *)0x0);
      return bVar2;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Boolean OnClickHandler(EditorStateMachine, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnClickHandler
               (MVWorldObjectClient *this,EditorStateMachine *esm,Collider *collider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 == '\0') {
code_?:
    cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
    if (cVar1 != '\0') {
      pGVar2 = (this->fields).outputConnectorObject;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (pGVar2,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      esm = (EditorStateMachine *)0x0;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)collider,(Object_1 *)pUVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (this->fields).selectedConnector = 2;
        goto code_?;
      }
    }
    cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)(this);
    if (cVar1 == '\0') {
      return 0;
    }
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 != (GameObject *)0x0) {
      pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (pGVar2,
                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)collider,(Object_1 *)pUVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return 0;
      }
      (this->fields).selectedConnector = 3;
      if (esm != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_PushState
                  ((FSMEntity *)esm,EditorEvent__Enum_ESAddObjectLink,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  else {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (pGVar2,
                        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)collider,(Object_1 *)pUVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    (this->fields).selectedConnector = 1;
code_?:
    if (esm != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_PushState((FSMEntity *)esm,EditorEvent__Enum_ESAddLink,(MethodInfo *)0x0)
      ;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnExitObject
               (MVWorldObjectClient *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0xc;
  value = (Object *)func_?(TypeInfo__EditorEvent,&uStack_1);
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnSelectedChanged
               (MVWorldObjectClient *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields).SelectedChanged;
  if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    this_01 = (SelectedEventArgs *)func_?(TypeInfo__SelectedEventArgs);
    SelectedEventArgs::SelectedEventArgs__ctor(this_01,selected,(MethodInfo *)0x0);
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>__Invoke_MVWorldObjectClient__SelectedEventArgs_
              );
  }
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialRemoveFromWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *entriesToRemove
               ,MethodInfo *method)

{
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialRemoveFromWOData
            ((MVWorldObject *)this,entriesToRemove,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialUpdateWOData
            ((MVWorldObject *)this,woData,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  return;
}


/* Void PositionChangedNotify() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PositionChangedNotify
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields).PositionChanged;
  if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    return;
  }
  this_01 = (this->fields).transform;
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_01,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    this_02 = (PositionChangedEventArgs *)func_?(TypeInfo__PositionChangedEventArgs);
    newPos.z = fVar4;
    newPos.x = (float)(undefined4)uStack_3;
    newPos.y = (float)uStack_3._4_4_;
    PositionChangedEventArgs::PositionChangedEventArgs__ctor(this_02,newPos,(MethodInfo *)0x0);
    if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
      Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_02,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__Invoke_MVWorldObjectClient__PositionChangedEventArgs_
                );
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ReceiveInteractionPackage(InteractionData, MVPlayer) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceiveInteractionPackage
               (MVWorldObjectClient *this,InteractionData interactionStruct,MVPlayer *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AvatarPackages->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AvatarPackages->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarPackages);
  }
  this_00 = TypeInfo__AvatarPackages->static_fields->packages;
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
  CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
            ((CrossPlatformInputManager_VirtualAxis *)&interactionStruct,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_MV_WorldObject_InteractionPackageType_InteractionPackage_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             InteractionPackageType,System::Object]::
             Dictionary_2_MV_WorldObject_InteractionPackageType_System_Object__get_Item
                       ((Dictionary_2_MV_WorldObject_InteractionPackageType_System_Object_ *)this_00
                        ,(InteractionPackageType__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                       );
    if (pOVar1 != (Object *)0x0) {
      (*pOVar1->klass[1]._0.gc_desc)
                (pOVar1,pOVar1->klass[1]._0.name,p,interactionStruct.damage,
                 interactionStruct.impulse.x,interactionStruct.impulse.y,interactionStruct.impulse.z
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivePackage(MVPlayer, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceivePackage
               (MVWorldObjectClient *this,MVPlayer *p,
               Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (package != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)package,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        pLStack_8->klass = (Link__Array__Class *)0x77;
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
      ;
      piVar12 = (int *)func_?();
      if (piVar12 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar12 + 0x20) !=
          (TypeInfo__MV__WorldObject__PackageType->_0).element_class) break;
      pcVar13 = (char *)func_?(piVar12);
      if (*pcVar13 == '\0') {
        uVar14 = func_?(&KStack_7);
        DStack_10.current.value = (Object *)0x0;
        DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
        DStack_10.next = 0;
        DStack_10.stamp = 0;
        DStack_10.current.key = 0;
        uVar14 = func_?(uVar14);
        func_?(&DStack_10,uVar14);
        func_?(0x3c,this,DStack_10.dictionary,DStack_10.next,DStack_10.stamp,
                        DStack_10.current.key,DStack_10.current.value);
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Unknown_package_type,(MethodInfo *)0x0);
      }
    }
    func_?(piVar12,TypeInfo__MV__WorldObject__PackageType);
  }
code_?:
  func_?(0);
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemovePreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemovePreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar1,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (this_00 == (UseInteratorVisualization__Array *)0x0) goto code_?;
      PreviewBox::PreviewBox_DestroyBox((PreviewBox *)this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void RemoveSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemoveSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar1,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (this_00 == (UseInteratorVisualization__Array *)0x0) goto code_?;
      SelectionBox::SelectionBox_FadeOutDestroy((SelectionBox *)this_00,0.8,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void RotateAround(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RotateAround
               (MVWorldObjectClient *this,Vector3 pivot,Vector3 axis,float angle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&fStack_3,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).transform;
    fVar4 = pQVar2->x;
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (pTVar1,pivot,axis,angle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).transform;
      if (pTVar1 != (Transform *)0x0) {
        pQVar2 = (Quaternion *)&stack0xffffffec;
        puVar5 = &UNK_?;
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           (pQVar2,pTVar1,(MethodInfo *)0x0);
        fStack_3 = pQVar6->x;
        fStack_7 = pQVar6->y;
        puStack_8 = (undefined *)pQVar6->z;
        fVar9 = pQVar6->x;
        fVar10 = pQVar6->y;
        puVar11 = (undefined *)pQVar6->z;
        pQVar12 = (Quaternion__Class *)pQVar6->w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar11 = &UNK_?;
          pQVar12 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        lhs.y = (float)puVar5;
        lhs.x = fVar4;
        lhs.z = (float)pQVar2;
        lhs.w = fVar9;
        rhs.y = fVar10;
        rhs.x = fVar9;
        rhs.z = (float)puVar11;
        rhs.w = (float)pQVar12;
        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                          (lhs,rhs,(MethodInfo *)0x0);
        if ((bVar13 != 0) &&
           (this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                      (this->fields).RotationChanged,
           this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)) {
          this_01 = (RotationChangedEventArgs *)func_?();
          newRotation.y = fStack_7;
          newRotation.x = fStack_3;
          newRotation.z = (float)puStack_8;
          newRotation.w = fVar4;
          RotationChangedEventArgs::RotationChangedEventArgs__ctor
                    (this_01,newRotation,(MethodInfo *)0x0);
          System.Core.dll::System::Action`2[Object,UnityEngine::
          ReflectionProbe+ReflectionProbeEvent]::
          Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                    (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__Invoke_MVWorldObjectClient__RotationChangedEventArgs_
                    );
        }
        return;
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RuntimeDataUpdate(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RuntimeDataUpdate
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *dataDelta,
               MethodInfo *method)

{
  this_00 = (this->fields).runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    MVRuntimeDataVariables::MVRuntimeDataVariables_Receive(this_00,dataDelta,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnRunTimeDataUpdate.method)
              (this,(this->klass->vtable).OnEnterObject.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Select
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if ((this->fields).selected != 1) {
    pMVar1 = this->klass;
    (this->fields).selected = 1;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,1,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Select_1
               (MVWorldObjectClient *this,Color color,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).AddSelectionBox.method)
            (this,(this->klass->vtable).RemoveSelectionBox.methodPtr);
  if ((this->fields).selected != 1) {
    pMVar1 = this->klass;
    (this->fields).selected = 1;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,1,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void SendPackage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SendPackage
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *package,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_WorldObjectRPC
              (this_00,(this->fields)._.id,package,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetName() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetName
               (MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  value = (String *)
          (*(code *)(this->klass->vtable).ToString.method)
                    (this,(this->klass->vtable).get_Position.methodPtr);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetNetworkObject(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
               (MVWorldObjectClient *this,bool local,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  pIVar2 = TypeRef__MVCubeModelFineGrainedTerrain;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  if (pTVar1 != pTVar3) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    pIVar2 = TypeRef__MVCubeModelPrototypeTerrain;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    if ((pTVar1 != pTVar3) && (local != 0)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pTVar5 = (TransformNetworkManager *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                              (MethodInfo *)0x0), pTVar5 != (TransformNetworkManager *)0x0)) {
        pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar5,(this->fields)._.id,(MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkObject *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Problem__network_reporter_is_add,(MethodInfo *)0x0);
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pTVar5 = (TransformNetworkManager *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                              (MethodInfo *)0x0);
          woID = (this->fields)._.id;
          this_00 = (MVNetworkReporter *)func_?();
          MVNetworkReporter::MVNetworkReporter__ctor(this_00,this,(MethodInfo *)0x0);
          if (pTVar5 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar5,woID,this_00,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (this_01 = (RuntimeVariableNetworkManager *)
                          ShootableButton::ShootableButton_get_InputSignalReceiver
                                    ((ShootableButton *)pMVar4,(MethodInfo *)0x0),
               this_01 != (RuntimeVariableNetworkManager *)0x0)) {
              RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                        (this_01,(this->fields)._.id,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
               (MVWorldObjectClient *this,MethodInfo *method)

{
  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
            ((RuntimePrototypeCubeModel *)this,0,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields).interactionFlags + 4);
  piVar2 = &(this->fields).interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 & 0xfffdffff;
  *(undefined4 *)((int)&(this->fields).interactionFlags + 4) = uVar1;
  (*(code *)(this->klass->vtable).RemovePreviewBox.method)
            (this,(this->klass->vtable).HideConnectors.methodPtr);
  return;
}


/* Void SetupBusinessLogic() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupBusinessLogic
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (MVItemBusinessLogic *)
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (MVItemBusinessLogic *)0x0) {
      bVar1 = MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
                        (this_01,*(int32_t *)(unaff_ESI + 0x10),(MethodInfo *)0x0);
      if (bVar1 != 0) {
        *(uint *)(unaff_ESI + 0xb8) = *(uint *)(unaff_ESI + 0xb8) | 0x4000;
        *(undefined4 *)(unaff_ESI + 0xbc) = *(undefined4 *)(unaff_ESI + 0xbc);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HideConnectors.method)
            (this,(this->klass->vtable).ShowConnectors.methodPtr);
  return;
}


/* Void ShowConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ShowConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)
                    (this,(this->klass->vtable).OnInputStateChanged.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ToString
                   (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,7);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if ((pTVar1 == (Type *)0x0) ||
     (pOVar2 = (Object *)
               (*(code *)(pTVar1->klass->vtable).ToString.method)
                         (pTVar1,(pTVar1->klass->vtable).GetCustomAttributes.methodPtr),
     args == (Object__Array *)0x0)) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    if ((StringLiteral__id_ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__id_,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)StringLiteral__id_;
    iStack_5 = (this->fields)._.id;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    if ((StringLiteral__group_id_ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__group_id_,(args->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)StringLiteral__group_id_;
    iStack_6 = (this->fields)._.groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    if ((StringLiteral__item_id_ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__item_id_,(args->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = (Object *)StringLiteral__item_id_;
    iStack_7 = (this->fields)._.itemId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if ((pOVar2 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 != 0)) {
      if (6 < args->max_length) {
        args->vector[6] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar8;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}


/* Void TraverseRecursiveTail(MVWorldObjectClient+CallBackDelegate) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_TraverseRecursiveTail
               (MVWorldObjectClient *this,MVWorldObjectClient_CallBackDelegate *callBack,
               MethodInfo *method)

{
  if (callBack != (MVWorldObjectClient_CallBackDelegate *)0x0) {
    MVWorldObjectClient+CallBackDelegate::MVWorldObjectClient_CallBackDelegate_Invoke
              (callBack,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ShowConnectors.method)
            (this,(this->klass->vtable).Delete.methodPtr);
  return;
}


/* MVWorldObjectClient() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__MVWorldObjectClient->static_fields->woMaxShadowCasters = 0x14;
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData
                     ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,this,data,
                      (MethodInfo *)0x0);
  position = pMVar1->position;
  uVar2 = (pMVar1->rotation).z;
  uVar3 = (pMVar1->rotation).x;
  uVar4 = (pMVar1->rotation).y;
  rotation.y = (float)uVar4;
  rotation.x = (float)uVar3;
  fVar5 = (pMVar1->rotation).w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  rotation.z = (float)uVar2;
  rotation.w = fVar5;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                      ((SentryGunBeam *)prefabObject,position,rotation,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                      );
  if (this_01 != (SentryGunBeam *)0x0) {
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_01,(MethodInfo *)0x0);
    (this->fields).goId = iVar7;
    (this->fields).gameObject = (GameObject *)this_01;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    (this->fields).transform = pTVar8;
    this_00 = (this->fields).gameObject;
    if (this_00 != (GameObject *)0x0) {
      pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          (this_00,
                           UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                          );
      (this->fields).collider = (Collider *)pUVar9;
      MVWorldObjectClient_CreateWorldObject
                (this,(Dictionary_2_System_Object_System_Object_ *)&UNK_?,
                 (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_1
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData
                     ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,this,data,
                      (MethodInfo *)0x0);
  position = pMVar1->position;
  uVar2 = (pMVar1->rotation).z;
  uVar3 = (pMVar1->rotation).x;
  uVar4 = (pMVar1->rotation).y;
  rotation.y = (float)uVar4;
  rotation.x = (float)uVar3;
  fVar5 = (pMVar1->rotation).w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefabObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  rotation.z = (float)uVar2;
  rotation.w = fVar5;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                      ((SentryGunBeam *)prefabObject,position,rotation,
                       ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                      );
  if (this_01 != (SentryGunBeam *)0x0) {
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (pGVar7 != (GameObject *)0x0) {
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)pGVar7,(MethodInfo *)0x0);
      (this->fields).goId = iVar8;
      (this->fields).component = (ObjectPrefab *)this_01;
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
      (this->fields).gameObject = pGVar7;
      this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)(this->fields).component;
      if (this_00 !=
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) {
        pCVar9 = (Collider *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            (this_00,(MethodInfo *)0x0);
        (this->fields).collider = pCVar9;
        pGVar7 = (this->fields).gameObject;
        if (pGVar7 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar7,(MethodInfo *)0x0);
          (this->fields).transform = pTVar10;
          MVWorldObjectClient_CreateWorldObject
                    (this,(Dictionary_2_System_Object_System_Object_ *)0x0,
                     (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_2
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  if (pGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields).goId = iVar2;
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      (this->fields).transform = pTVar3;
      pMVar4 = MVWorldObjectClient_GetTransformData
                         ((MVWorldObjectClient_TransformData *)&stack0xffffffc4,this,data,
                          (MethodInfo *)0x0);
      pTVar3 = (this->fields).transform;
      fVar5 = (pMVar4->rotation).x;
      uVar6 = (pMVar4->rotation).y;
      uVar7 = (pMVar4->rotation).z;
      fVar8 = (pMVar4->rotation).w;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,pMVar4->position,(MethodInfo *)0x0);
        pTVar3 = (this->fields).transform;
        if (pTVar3 != (Transform *)0x0) {
          value.y = (float)uVar6;
          value.x = fVar5;
          value.z = (float)uVar7;
          value.w = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar3,value,(MethodInfo *)0x0);
          pGVar1 = (this->fields).gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pUVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               (pGVar1,
                                UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                               );
            (this->fields).collider = (Collider *)pUVar9;
            MVWorldObjectClient_CreateWorldObject
                      (this,data,(Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?,
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


/* Vector3 get_EulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_EulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* InteractionDataHandlerBase get_InteractionDataHandlerBase() */

InteractionDataHandlerBase *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interactionDataHandlerBase;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = (this->fields).gameObject;
    if (this_00 == (GameObject *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      pIVar1 = (InteractionDataHandlerBase *)(*pcVar3)();
      return pIVar1;
    }
    pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this_00,
                        InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                       );
    (this->fields).interactionDataHandlerBase = (InteractionDataHandlerBase *)pUVar4;
  }
  return (this->fields).interactionDataHandlerBase;
}


/* InteractionFlags get_InteractionFlags() */

InteractionFlags__Enum
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
          (MVWorldObjectClient *this,MethodInfo *method)

{
  return (InteractionFlags__Enum)(this->fields).interactionFlags;
}


/* Vector3 get_ObjectConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_ObjectConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0,0,0xbf800000,0);
  return __return_storage_ptr__;
}


/* Quaternion get_ObjectConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_ObjectConnectorRotation
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0x3f800000,0,0,0);
  return __return_storage_ptr__;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Rotation
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Dictionary`2[System.Object,System.Object] get_RunTimeData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_RunTimeData
          (MVWorldObjectClient *this,MethodInfo *method)

{
  return (this->fields)._.runTimeData;
}


/* Vector3 get_Scale() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Boolean get_Selected() */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Selected
               (MVWorldObjectClient *this,MethodInfo *method)

{
  return (this->fields).selected;
}


/* Quaternion get_SyncRot() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->y;
      fVar3 = pQVar1->z;
      fVar4 = pQVar1->w;
      __return_storage_ptr__->x = pQVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      __return_storage_ptr__->w = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar5)();
  return pQVar1;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Visible
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return 0;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)*ppUVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Vector3 get_WorldEulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* HashSet`1[System.Int32] get_WorldIDsRecursive() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVWorldObjectClient____c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    iVar1 = func_?();
    pMVar2 = MethodInfo__MVWorldObjectClient____c__AnonStorey0____m__0_MVWorldObjectClient_;
    *(Il2CppMethodPointer *)(iVar1 + 8) =
         MethodInfo__MVWorldObjectClient____c__AnonStorey0____m__0_MVWorldObjectClient_->
         methodPointer;
    *(MethodInfo **)(iVar1 + 0x14) = pMVar2;
    *(ScaleAnimationBase **)(iVar1 + 0x10) = this_00;
    (*(code *)(this->klass->vtable).TraverseRecursiveTail.method)
              (this,iVar1,(this->klass->vtable).CompareWithKoGaMaPackage.methodPtr);
    return (this_00->fields)._._._._.m_CachedPtr;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pHVar4 = (HashSet_1_System_Int32_ *)(*pcVar3)();
  return pHVar4;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  transform = (this->fields).transform;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     (&VStack_2,transform,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_DocumentationType(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_DocumentationType
               (MVWorldObjectClient *this,MVWorldObjectDocumentationType__Enum value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_EulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_EulerAngles
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
              (pTVar1,value,(MethodInfo *)0x0);
    this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
              (this->fields).RotationChanged;
    if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      return;
    }
    pTVar1 = (this->fields).transform;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
      fVar3 = pQVar2->y;
      fVar4 = pQVar2->z;
      fVar5 = pQVar2->w;
      puVar6 = &UNK_?;
      this_01 = (RotationChangedEventArgs *)func_?();
      newRotation.y = fVar3;
      newRotation.x = (float)puVar6;
      newRotation.z = fVar4;
      newRotation.w = fVar5;
      RotationChangedEventArgs::RotationChangedEventArgs__ctor
                (this_01,newRotation,(MethodInfo *)0x0);
      if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
        System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]
        ::Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                  (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__Invoke_MVWorldObjectClient__RotationChangedEventArgs_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_Group(MVGroup) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Group
               (MVWorldObjectClient *this,MVGroup *value,MethodInfo *method)

{
  (this->fields).group = value;
  return;
}


/* Void set_InteractionFlags(InteractionFlags) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
               (MVWorldObjectClient *this,InteractionFlags__Enum value,MethodInfo *method)

{
  *(InteractionFlags__Enum *)&(this->fields).interactionFlags = value;
  *(MethodInfo **)((int)&(this->fields).interactionFlags + 4) = method;
  return;
}


/* Void set_PlayInteractionType(PlayInteractionType) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
               (MVWorldObjectClient *this,PlayInteractionType__Enum value,MethodInfo *method)

{
  (this->fields)._PlayInteractionType_k__BackingField = value;
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Position
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).PositionChangedNotify.method)
              (this,(this->klass->vtable).get_WorldPivot.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Rotation
               (MVWorldObjectClient *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    value_00.y = value.y;
    value_00.x = value.x;
    value_00.z = value.z;
    value_00.w = value.w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,value_00,(MethodInfo *)0x0);
    this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
              (this->fields).RotationChanged;
    if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      return;
    }
    pTVar1 = (this->fields).transform;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&value,pTVar1,(MethodInfo *)0x0);
      value.x = pQVar2->x;
      value.y = pQVar2->y;
      value.z = pQVar2->z;
      value.w = pQVar2->w;
      this_01 = (RotationChangedEventArgs *)func_?();
      newRotation.y = value.y;
      newRotation.x = value.x;
      newRotation.z = value.z;
      newRotation.w = value.w;
      RotationChangedEventArgs::RotationChangedEventArgs__ctor
                (this_01,newRotation,(MethodInfo *)0x0);
      if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
        System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]
        ::Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                  (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__Invoke_MVWorldObjectClient__RotationChangedEventArgs_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_RunTimeData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_RunTimeData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)value,(MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pOVar4 = (Object *)0x0;
    if (bVar3) {
      pOVar4 = pOVar1;
    }
    if (pOVar4 == (Object *)0x0) {
      func_?(pOVar1,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uRam_? = in_stack_6;
  return;
}


/* Void set_Scale(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Scale
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    this_01 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
              (this->fields).ScaleChanged;
    if (this_01 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      this_02 = (ScaleChangedEventArgs *)func_?();
      ScaleChangedEventArgs::ScaleChangedEventArgs__ctor(this_02,value,(MethodInfo *)0x0);
      System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
      Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                (this_01,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_02,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__Invoke_MVWorldObjectClient__ScaleChangedEventArgs_
                );
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Selected(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Selected
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if ((this->fields).selected != value) {
    pMVar1 = this->klass;
    (this->fields).selected = value;
    (*(code *)(pMVar1->vtable).OnSelectedChanged.method)
              (this,_value,(pMVar1->vtable).ValidateObjectLinkTarget.methodPtr);
  }
  return;
}


/* Void set_SyncPos(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncPos
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).set_WorldPosition.method)
            (this,value._0_8_,value.z,(this->klass->vtable).get_WorldRotation_1.methodPtr);
  return;
}


/* Void set_SyncRot(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
               (MVWorldObjectClient *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value,(MethodInfo *)0x0);
    this_01 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
              (this->fields).RotationChanged;
    if (this_01 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      this_02 = (RotationChangedEventArgs *)func_?();
      RotationChangedEventArgs::RotationChangedEventArgs__ctor(this_02,value,(MethodInfo *)0x0);
      System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
      Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                (this_01,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_02,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__Invoke_MVWorldObjectClient__RotationChangedEventArgs_
                );
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Visible
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      if ((int)pUVar1->max_length < 1) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_MeshRenderer_s__not_found_on_att,(MethodInfo *)0x0);
        return;
      }
      uVar2 = 0;
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppUVar3,value,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_WorldEulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
              (pTVar1,value,(MethodInfo *)0x0);
    this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
              (this->fields).RotationChanged;
    if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
      return;
    }
    pTVar1 = (this->fields).transform;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
      fVar3 = pQVar2->y;
      fVar4 = pQVar2->z;
      fVar5 = pQVar2->w;
      puVar6 = &UNK_?;
      this_01 = (RotationChangedEventArgs *)func_?();
      newRotation.y = fVar3;
      newRotation.x = (float)puVar6;
      newRotation.z = fVar4;
      newRotation.w = fVar5;
      RotationChangedEventArgs::RotationChangedEventArgs__ctor
                (this_01,newRotation,(MethodInfo *)0x0);
      if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
        System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]
        ::Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                  (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__Invoke_MVWorldObjectClient__RotationChangedEventArgs_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldPosition
               (MVWorldObjectClient *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).PositionChangedNotify.method)
              (this,(this->klass->vtable).get_WorldPivot.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

