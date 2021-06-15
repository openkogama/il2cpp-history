
/* Void Awake() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_Awake
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVComponent::MVComponent_Awake((MVComponent *)this,(MethodInfo *)0x0);
  x = (this->fields).closestPoint;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    this_01 = (LockCursorManager3DMode *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (this_00,
                         ClosestPointPoint_MethodInfo__UnityEngine__GameObject__AddComponent<ClosestPointPoint>__
                        );
    value = (Action_1_Boolean_ *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (LockCursorManager3DMode *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                (this_01,value,(MethodInfo *)0x0);
      (this->fields).closestPoint = (ClosestPointBase *)this_01;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::InteractionDataHandlerBase::
          InteractionDataHandlerBase_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,InteractionDataHandlerBase *this,Vector3 from,
                    MethodInfo *method)

{
  pCVar1 = (this->fields).closestPoint;
  if (pCVar1 != (ClosestPointBase *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pCVar1->klass->vtable).__unknown.method)
                       (&from,pCVar1,from._0_8_,from.z,pCVar1->klass[1]._0.image);
    uVar3 = *puVar2;
    fVar4 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Boolean HandleInteraction(InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
               (InteractionDataHandlerBase *this,InteractionData interaction,bool interactionIsLocal
               ,MethodInfo *method)

{
  bVar1 = (*(code *)(this->klass->vtable).__unknown_1.method)
                    (this,0,interaction.damage,interaction.impulse.x,interaction.impulse.y,
                     interaction.impulse.z,interaction._16_4_,_interactionIsLocal,
                     (this->klass->vtable).OnValidate.methodPtr);
  return bVar1;
}


/* Boolean IsFriendlyFire(MVPickupOwner) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
               (InteractionDataHandlerBase *this,MVPickupOwner *interactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)interactor,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar2 != (MVNetworkGame *)0x0) &&
       (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
       interactor != (MVPickupOwner *)0x0)) &&
      (this_00 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)interactor,(MethodInfo *)0x0),
      this_00 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)) &&
     (actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              (this_00,(MethodInfo *)0x0), pSVar3 != (SkyParam *)0x0)) {
    MVar4 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                      ((MVTeamManager *)pSVar3,(int32_t)actorNumber,(MethodInfo *)0x0);
    MVar5 = (**(code **)(_UNK_? + 0xe8))();
    if (MVar4 != MVar5) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar2,(MethodInfo *)0x0), pSVar3 != (SkyParam *)0x0))
    {
      iVar6 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar3,(MethodInfo *)0x0);
      return 1 < iVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_OnValidate
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).closestPoint;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this_00,
                        ClosestPointBase_MethodInfo__UnityEngine__GameObject__GetComponent<ClosestPointBase>__
                       );
    (this->fields).closestPoint = (ClosestPointBase *)pUVar3;
  }
  return;
}

