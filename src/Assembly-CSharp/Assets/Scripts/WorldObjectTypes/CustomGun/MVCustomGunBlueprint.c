
/* Void EndMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_EndMuzzleEdit(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                   );
    func_?(&
                    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_02.m_Index = (int32_t)(this->fields).muzzlePoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_02.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._.itemBase;
  if ((pMVar2 == (MVEditablePickupItemBase *)0x0) ||
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar2->fields)._._._._.data,
     this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this_03 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_02.m_Index == 0) {
      dictionary.m_Index = (int32_t)(IDictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)this_02.m_Index + 0xb8) < bVar3) ||
         (dictionary = this_02,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)this_02.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              (this_03,(IDictionary_2_System_Object_System_Object_ *)dictionary.m_Index,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    pGVar5 = (this->fields).muzzlePoint;
    if ((pGVar5 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar5,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0);
    pSVar8 = MathFunctions::MathFunctions_ToFloatArray(*pVVar7,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_03,(Object *)StringLiteral_MuzzlePosition,(Object *)pSVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    pGVar5 = (this->fields).muzzlePoint;
    if ((pGVar5 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar5,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                        ((Quaternion *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToEulerRad
                        ((Vector3 *)&stack0xffffffe4,*pQVar9,(MethodInfo *)0x0);
    uVar10 = pVVar7->x;
    uVar11 = pVVar7->y;
    euler.y = (float)uVar11 * _UNK_?;
    euler.x = (float)uVar10 * _UNK_?;
    euler.z = pVVar7->z * _UNK_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_MakePositive
                        ((Vector3 *)&stack0xfffffff0,euler,(MethodInfo *)0x0);
    pSVar8 = MathFunctions::MathFunctions_ToFloatArray(*pVVar7,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_03,(Object *)StringLiteral_MuzzleDirection,(Object *)pSVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_02.m_Index = func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)this_02.m_Index,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if ((NavMesh_OnNavMeshPreUpdate *)this_02.m_Index == (NavMesh_OnNavMeshPreUpdate *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02.m_Index,
               (Object *)StringLiteral_itemData,(Object *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pMVar2 = (this->fields)._.itemBase;
    if (pMVar2 == (MVEditablePickupItemBase *)0x0) goto code_?;
    (*(code *)(pMVar2->klass->vtable).PartialUpdateWOData.method)
              (pMVar2,this_02.m_Index,(pMVar2->klass->vtable).PartialRemoveFromWOData.methodPtr);
    this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar2 = (this->fields)._.itemBase;
    if ((pMVar2 == (MVEditablePickupItemBase *)0x0) ||
       (this_04 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
              (this_04,(pMVar2->fields)._._._._.id,
               (Dictionary_2_System_Object_System_Object_ *)this_02.m_Index,(MethodInfo *)0x0);
    pOVar12 = (this->fields).transformGizmo;
    if ((pOVar12 == (ObjectTransformGizmo *)0x0) ||
       (this_01 = (pOVar12->fields)._._gizmo, this_01 == (Gizmo *)0x0)) goto code_?;
    RTG::Gizmo::Gizmo_SetEnabled(this_01,0,(MethodInfo *)0x0);
    pGVar5 = (this->fields).muzzlePoint;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    }
    this_05 = (Behaviour *)
              RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    if (this_05 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (this_05,0,(MethodInfo *)0x0);
    coroutine = (this->fields).muzzleBoundCheckRoutine;
    if (coroutine != (IEnumerator *)0x0) {
      Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
    }
    (this->fields).muzzleBoundCheckRoutine = (IEnumerator *)0x0;
    func_?();
    pUVar13 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
              ->static_fields->OnResetPosition;
    this_02.m_Index = func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_02.m_Index,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
               ,(MethodInfo *)0x0);
    pUVar13 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar13,(Delegate *)this_02.m_Index,(MethodInfo *)0x0);
    if (pUVar13 != (UnityAction *)0x0) {
      pUVar14 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (UnityAction *)0x0) goto code_?;
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition->
      static_fields->OnResetPosition = pUVar14;
      pUVar14 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition->
    static_fields->OnResetPosition = (UnityAction *)0x0;
code_?:
    func_?();
    pUVar13 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
              ->static_fields->OnResetRotation;
    this_02.m_Index = func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_02.m_Index,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
               ,(MethodInfo *)0x0);
    pUVar13 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar13,(Delegate *)this_02.m_Index,(MethodInfo *)0x0);
    if (pUVar13 == (UnityAction *)0x0) {
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation->
      static_fields->OnResetRotation = (UnityAction *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar14 = (UnityAction *)0x0;
    if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar14 = pUVar13;
    }
    if (pUVar14 != (UnityAction *)0x0) {
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation->
      static_fields->OnResetRotation = pUVar14;
      pUVar14 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
  pDVar4 = extraout_EDX;
code_?:
  func_?(this_02.m_Index,pDVar4);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void EnterMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_EnterMuzzleEdit(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                   );
    func_?(&
                    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
  }
  this_02 = (Behaviour *)
            RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (this_02 == (Behaviour *)0x0) {
code_?:
    func_?();
    pUStack1 = extraout_ECX;
    pUVar2 = extraout_EDX;
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (this_02,1,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzlePoint;
    if (this_00 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pOVar3 = (this->fields).transformGizmo;
    if ((pOVar3 == (ObjectTransformGizmo *)0x0) ||
       (this_01 = (pOVar3->fields)._._gizmo, this_01 == (Gizmo *)0x0)) goto code_?;
    RTG::Gizmo::Gizmo_SetEnabled(this_01,1,(MethodInfo *)0x0);
    pOVar3 = (this->fields).transformGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPositionAndRotation
              (pOVar3,(MethodInfo *)0x0);
    coroutine = (this->fields).muzzleBoundCheckRoutine;
    ppIVar4 = &(this->fields).muzzleBoundCheckRoutine;
    if (coroutine != (IEnumerator *)0x0) {
      Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = 
    TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
    ;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    *ppIVar4 = (IEnumerator *)value;
    func_?();
    Coroutines::Coroutines_Start(*ppIVar4,(MethodInfo *)0x0);
    pUVar5 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
             ->static_fields->OnResetPosition;
    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar6,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
               ,(MethodInfo *)0x0);
    pUStack1 =
         (UnityAction *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
    if (pUStack1 == (UnityAction *)0x0) {
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition->
      static_fields->OnResetPosition = (UnityAction *)0x0;
      pUStack7 = (UnityAction__Class *)0x0;
code_?:
      pUStack1 =
           (UnityAction *)
           TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
           ->static_fields;
      func_?();
      pUStack8 = TypeInfo__UnityEngine__Events__UnityAction;
      pUVar5 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
               ->static_fields->OnResetRotation;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)this,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                 ,(MethodInfo *)0x0);
      pUStack1 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pUStack1 == (UnityAction *)0x0) {
        TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation->
        static_fields->OnResetRotation = (UnityAction *)0x0;
        pUStack7 = (UnityAction__Class *)0x0;
        pUStack1 =
             (UnityAction *)
             TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
             ->static_fields;
        func_?();
        return;
      }
      pUVar5 = (UnityAction *)0x0;
      if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUStack1;
      }
      pUStack7 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar5 == (UnityAction *)0x0) goto code_?;
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation->
      static_fields->OnResetRotation = pUVar5;
      pUStack7 = (UnityAction__Class *)(UnityAction *)0x0;
      if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUStack7 = (UnityAction__Class *)pUStack1;
      }
      pUVar2 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUStack7 != (UnityAction__Class *)0x0) {
        pUStack1 =
             (UnityAction *)
             TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
             ->static_fields;
        func_?();
        return;
      }
    }
    else {
      pUVar5 = (UnityAction *)0x0;
      if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUStack1;
      }
      pUStack7 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar5 == (UnityAction *)0x0) goto code_?;
      TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition->
      static_fields->OnResetPosition = pUVar5;
      pUStack7 = (UnityAction__Class *)(UnityAction *)0x0;
      if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUStack7 = (UnityAction__Class *)pUStack1;
      }
      pUVar2 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUStack7 != (UnityAction__Class *)0x0) goto code_?;
    }
  }
  pUStack7 = pUVar2;
  pUStack7 = (UnityAction__Class *)func_?();
  pUStack1 = extraout_ECX_00;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_Initialize(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  EditablePickupItem::MVEditablePickupItemBaseBlueprint::
  MVEditablePickupItemBaseBlueprint_Initialize
            ((MVEditablePickupItemBaseBlueprint *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.itemBase;
  if ((pMVar1 != (MVEditablePickupItemBase *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar1->fields)._._._._.data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    hashtable = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (hashtable.m_Index == 0) {
      hashtable.m_Index = 0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)hashtable.m_Index + 0xb8) < bVar2) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)hashtable.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      pGVar4 = (pPVar3->fields).muzzleEditNodePrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pGVar4 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar4,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      ppGVar5 = &(this->fields).muzzlePoint;
      *ppGVar5 = pGVar4;
      func_?();
      if (*ppGVar5 != (GameObject *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (*ppGVar5,(MethodInfo *)0x0);
        pMVar7 = (this->fields)._.editableCubeModel;
        if ((pMVar7 != (MVCubeModelInstance *)0x0) && (pTVar6 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar6,(pMVar7->fields)._._.transform,(MethodInfo *)0x0);
          if (*ppGVar5 != (GameObject *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (*ppGVar5,(MethodInfo *)0x0);
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            pVVar8 = Extensions::Extensions_GetVector3
                                (&VStack_9,
                                 (Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                                 StringLiteral_MuzzlePosition,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar6,*pVVar8,(MethodInfo *)0x0);
              if (*ppGVar5 != (GameObject *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
                pVVar8 = Extensions::Extensions_GetVector3
                                    ((Vector3 *)&stack0xffffffe4,
                                     (Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                                     StringLiteral_MuzzleDirection,(MethodInfo *)0x0);
                VStack_9.x = pVVar8->x;
                VStack_9.y = pVVar8->y;
                VStack_9.z = pVVar8->z * _UNK_?;
                euler.y = VStack_9.y * _UNK_?;
                euler.x = VStack_9.x * _UNK_?;
                euler.z = VStack_9.z;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffe0,euler,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar6,*pQVar10,(MethodInfo *)0x0);
                  if (*ppGVar5 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (*ppGVar5,0,(MethodInfo *)0x0);
                    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
                    }
                    pBVar11 = (Behaviour *)
                              RTG::MonoSingleton`1[System::Object]::
                              MonoSingleton_1_System_Object__get_Get
                                        (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
                    if (pBVar11 != (Behaviour *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (pBVar11,1,(MethodInfo *)0x0);
                      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      this_02 = (RTGizmosEngine *)
                                RTG::MonoSingleton`1[System::Object]::
                                MonoSingleton_1_System_Object__get_Get
                                          (
                                          MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                          );
                      if (this_02 != (RTGizmosEngine *)0x0) {
                        pOVar12 = RTG::RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                                            (this_02,(MethodInfo *)0x0);
                        ppOVar13 = &(this->fields).transformGizmo;
                        *ppOVar13 = pOVar12;
                        func_?();
                        if (*ppOVar13 != (ObjectTransformGizmo *)0x0) {
                          RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                                    (*ppOVar13,*ppGVar5,(MethodInfo *)0x0);
                          if ((*ppOVar13 != (ObjectTransformGizmo *)0x0) &&
                             (pGVar14 = ((*ppOVar13)->fields)._._gizmo, pGVar14 != (Gizmo *)0x0)) {
                            this_01 = (pGVar14->fields)._universalGizmo;
                            this_03 = (List_1_System_Object_ *)func_?();
                            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP
                            ::Metadata::__Il2CppFullySharedGenericType]::
                            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                        *)this_03,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                                      );
                            if ((this_03 != (List_1_System_Object_ *)0x0) &&
                               (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          (this_03,(Object *)*ppGVar5,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                                          ), this_01 != (UniversalGizmo *)0x0)) {
                              RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
                                        (this_01,(IEnumerable_1_UnityEngine_GameObject_ *)this_03,
                                         (MethodInfo *)0x0);
                              if (*ppOVar13 != (ObjectTransformGizmo *)0x0) {
                                RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                                          (*ppOVar13,GizmoSpace__Enum_Global,(MethodInfo *)0x0);
                                if (*ppOVar13 != (ObjectTransformGizmo *)0x0) {
                                  RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectScale
                                            (*ppOVar13,0,(MethodInfo *)0x0);
                                  if ((*ppOVar13 != (ObjectTransformGizmo *)0x0) &&
                                     (pGVar14 = ((*ppOVar13)->fields)._._gizmo,
                                     pGVar14 != (Gizmo *)0x0)) {
                                    (pGVar14->fields)._forceRefresh = 1;
                                    if ((*ppOVar13 != (ObjectTransformGizmo *)0x0) &&
                                       (pGVar14 = ((*ppOVar13)->fields)._._gizmo,
                                       pGVar14 != (Gizmo *)0x0)) {
                                      RTG::Gizmo::Gizmo_SetEnabled(pGVar14,0,(MethodInfo *)0x0);
                                      pBVar11 = (Behaviour *)
                                                RTG::MonoSingleton`1[System::Object]::
                                                MonoSingleton_1_System_Object__get_Get
                                                          (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__
                                                  );
                                      if (pBVar11 != (Behaviour *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled(pBVar11,0,(MethodInfo *)0x0);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* IEnumerator MuzzleBoundCheckRoutine() */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
MVCustomGunBlueprint_MuzzleBoundCheckRoutine(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
  ;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_OnEndEditing(MVCustomGunBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      MVCubeModelBase::MVCubeModelBase_GetBounds
                ((Bounds *)&stack0xffffffd8,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
        puVar2 = &UNK_?;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           (__return_storage_ptr__,this_01,(MethodInfo *)0x0);
        uVar4 = pVVar3->x;
        uVar5 = pVVar3->y;
        value.y = (float)((uint)((float)__return_storage_ptr__ * (float)uVar5) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                  _UNK_?;
        value.x = (float)((uint)((float)puVar2 * (float)uVar4) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        value.z = (float)((uint)((float)this_01 * pVVar3->z) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                  _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar7 = (pVVar6->oneVector).x;
        uVar8 = (pVVar6->oneVector).y;
        fVar9 = (pVVar6->oneVector).z;
        fVar10 = (float10)(*(code *)(this->klass->vtable).get_CubeModelScale.method)();
        fVar11 = (float)fVar10;
        value_00.y = (float)uVar8 * fVar11;
        value_00.x = (float)uVar7 * fVar11;
        value_00.z = fVar9 * fVar11;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,value_00,(MethodInfo *)0x0);
        MVCustomGunBlueprint_EndMuzzleEdit(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_OnEnterObject
               (MVCustomGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (e != (EditorStateMachine *)0x0) {
    bVar1 = (e->fields)._MuzzleEditMode_k__BackingField;
    this_00 = (this->fields)._.itemBase;
    if (this_00 != (MVEditablePickupItemBase *)0x0) {
      pMVar2 = EditablePickupItem::MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                         (this_00,(MethodInfo *)0x0);
      if ((pMVar2 != (MVEditablePickupItemBaseObject *)0x0) &&
         (this_01 = (pMVar2->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          EditablePickupItem::MVEditablePickupItemBaseBlueprint::
          MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders
                    ((MVEditablePickupItemBaseBlueprint *)this,bVar1 == 0,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).OnStartEditing.method)
                    (this,(this->klass->vtable).OnEndEditing.methodPtr);
          if (bVar1 != 0) {
            MVCustomGunBlueprint_EnterMuzzleEdit(this,(MethodInfo *)0x0);
          }
          pEVar3 = (this->fields)._.editableCubeModelWrapper;
          if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
            bVar1 = (*(code *)(pEVar3->klass->vtable).OnEnterObject.method)
                              (pEVar3,e,(pEVar3->klass->vtable).OnExitObject.methodPtr);
            return bVar1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void ResetMuzzlePosition() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_ResetMuzzlePosition(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  x.m_Index = (int32_t)(this->fields).muzzlePoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pVVar2 = CustomGunData::CustomGunData_DefaultVector3
                     ((Vector3 *)&stack0xffffffe8,StringLiteral_MuzzlePosition,(MethodInfo *)0x0);
  pGVar3 = (GameObject *)pVVar2->z;
  value = *pVVar2;
  v = *pVVar2;
  pMVar4 = (this->fields)._.itemBase;
  if ((pMVar4 != (MVEditablePickupItemBase *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar4->fields)._._._._.data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    x = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (this_00,(Object *)StringLiteral_itemData,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (x.m_Index == 0) {
      x.m_Index = 0;
    }
    else {
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)x.m_Index + 0xb8) < bVar5) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)x.m_Index + 100) + -4 + (uint)bVar5 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              (this_02,(IDictionary_2_System_Object_System_Object_ *)x.m_Index,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    value_00 = MathFunctions::MathFunctions_ToFloatArray(v,(MethodInfo *)0x0);
    x.m_Index = (int32_t)pGVar3;
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_02,(Object *)StringLiteral_MuzzlePosition,(Object *)value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pGVar3 = (this->fields).muzzlePoint;
      if ((pGVar3 != (GameObject *)0x0) &&
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar3,(MethodInfo *)0x0), this_03 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_03,value,(MethodInfo *)0x0);
        this_01 = (this->fields).transformGizmo;
        if (this_01 != (ObjectTransformGizmo *)0x0) {
          RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPositionAndRotation
                    (this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pDVar6 = extraout_EDX;
code_?:
  func_?(x.m_Index,pDVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ResetMuzzleRotation() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_ResetMuzzleRotation(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_03.m_Index = (int32_t)(this->fields).muzzlePoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_03.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pVVar2 = CustomGunData::CustomGunData_DefaultVector3
                     ((Vector3 *)&stack0xffffffdc,StringLiteral_MuzzleDirection,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  VVar6 = *pVVar2;
  pMVar7 = (this->fields)._.itemBase;
  if ((pMVar7 != (MVEditablePickupItemBase *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar7->fields)._._._._.data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this_04 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_03.m_Index == 0) {
      dictionary.m_Index = (int32_t)(IDictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar9 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)this_03.m_Index + 0xb8) < bVar8) ||
         (dictionary = this_03,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)this_03.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              (this_04,(IDictionary_2_System_Object_System_Object_ *)dictionary.m_Index,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    value = MathFunctions::MathFunctions_ToFloatArray(VVar6,(MethodInfo *)0x0);
    if (this_04 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_04,(Object *)StringLiteral_MuzzleDirection,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (this->fields).muzzlePoint;
      if (this_01 != (GameObject *)0x0) {
        this_03.m_Index =
             (int32_t)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0);
        VVar6.y = (float)uVar4 * _UNK_?;
        VVar6.x = (float)uVar3 * _UNK_?;
        VVar6.z = fVar5 * _UNK_?;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffd8,VVar6,(MethodInfo *)0x0);
        if ((Transform *)this_03.m_Index != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    ((Transform *)this_03.m_Index,*pQVar10,(MethodInfo *)0x0);
          this_02 = (this->fields).transformGizmo;
          if (this_02 != (ObjectTransformGizmo *)0x0) {
            RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPositionAndRotation
                      (this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pDVar9 = extraout_EDX;
code_?:
  func_?(this_03.m_Index,pDVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_SetCubeSize(MVCustomGunBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       ((Bounds *)&stack0xffffffc8,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
    uVar3 = (pBVar2->m_Extents).y;
    uVar4 = (pBVar2->m_Extents).z;
    fVar5 = (pBVar2->m_Extents).x;
    if (fVar5 <= (float)uVar4) {
      fVar5 = (float)uVar4;
    }
    fVar5 = fVar5 + _UNK_?;
    fVar6 = (float)uVar3 + _UNK_?;
    if (fVar5 <= (float)uVar3 + _UNK_?) {
      fVar6 = fVar5;
    }
    pMVar1 = (this->fields)._.editableCubeModel;
    VStack_7.y = (float)uVar3;
    VStack_7.z = (float)uVar4;
    if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
       (pTVar8 = (pMVar1->fields)._._.transform, pTVar8 != (Transform *)0x0)) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         (&VStack_7,pTVar8,(MethodInfo *)0x0);
      fVar5 = pVVar9->x * fVar5;
      fVar6 = fVar6 * pVVar9->x;
      pMVar10 = (this->fields)._.itemBase;
      if (pMVar10 != (MVEditablePickupItemBase *)0x0) {
        pMVar11 = EditablePickupItem::MVEditablePickupItemBase::
                 MVEditablePickupItemBase_get_BaseObject(pMVar10,(MethodInfo *)0x0);
        if ((pMVar11 != (MVEditablePickupItemBaseObject *)0x0) &&
           (this_00 = (pMVar11->fields)._._.mainCollider, this_00 != (Collider *)0x0)) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          VStack_7.x = fVar5 + fVar5;
          VStack_7.z = fVar5 + fVar5;
          VStack_7.y = fVar6 + fVar6;
          if (pTVar8 != (Transform *)0x0) {
            value.y = VStack_7.y;
            value.x = VStack_7.x;
            value.z = VStack_7.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar8,value,(MethodInfo *)0x0);
            pMVar10 = (this->fields)._.itemBase;
            if (pMVar10 != (MVEditablePickupItemBase *)0x0) {
              VStack_7.z = (float)&UNK_?;
              MVLogicObject::MVLogicObject_SetLocalBounds((MVLogicObject *)pMVar10,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetMuzzlePointPosition(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_SetMuzzlePointPosition
               (MVCustomGunBlueprint *this,Vector3 pos,MethodInfo *method)

{
  this_00 = (this->fields).muzzlePoint;
  if (this_00 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_02,pos,(MethodInfo *)0x0);
      this_01 = (this->fields).transformGizmo;
      if (this_01 != (ObjectTransformGizmo *)0x0) {
        RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition(this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVCustomGunBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint__ctor
               (MVCustomGunBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  EditablePickupItem::MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint__ctor
            ((MVEditablePickupItemBaseBlueprint *)this,data,worldObjects,(MethodInfo *)0x0);
  iVar1 = (this->fields)._._._._.interactionFlags;
  puVar2 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
  *puVar2 = *puVar2 | 0x100;
  *(int *)&(this->fields)._._._._.interactionFlags = (int)iVar1;
  return;
}

