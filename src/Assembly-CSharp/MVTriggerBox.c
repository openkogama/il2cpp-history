
/* Void Destroy() */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Destroy(MVTriggerBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(Int32) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Enter
               (MVTriggerBox *this,int32_t instigatorId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._._._.outputLinkRefs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      *(undefined1 *)((int)LStack_6._current + 0x14) = 1;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Exit(MVTriggerBox *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._._._.outputLinkRefs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      *(undefined1 *)((int)LStack_6._current + 0x14) = 0;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVTriggerBox *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__SharedCubeFunctions;
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar3 = (pVVar2->oneVector).x;
      uVar4 = (pVVar2->oneVector).y;
      fVar5 = (float)uVar4 * _UNK_?;
      fVar6 = (pVVar2->oneVector).z * _UNK_?;
      pSVar7 = (SharedCubeFunctions__Class *)((float)uVar3 * _UNK_?);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar7 = pSVar1;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar7;
      rotation.x = gridSize;
      rotation.z = fVar5;
      rotation.w = fVar6;
      scale.y = fVar5;
      scale.x = (float)pSVar7;
      scale.z = fVar6;
      pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar8->y;
      fVar6 = pVVar8->z;
      __return_storage_ptr__->x = pVVar8->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar9)();
  return pVVar8;
}


/* Void OnExit(MVPlayer) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_OnExit
               (MVTriggerBox *this,MVPlayer *player,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVTriggerBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox__ctor
               (MVTriggerBox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVTriggerBoxObject);
    func_?(&
                    MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTriggerBoxPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    unaff_EDI = (this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (unaff_EDI != (ObjectPrefab *)0x0) {
      if (((unaff_EDI->klass->_1).naturalAligment <
           (TypeInfo__MVTriggerBoxObject->_1).naturalAligment) ||
         ((unaff_EDI->klass->_1).typeHierarchy
          [(TypeInfo__MVTriggerBoxObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVTriggerBoxObject)) goto code_?;
      (this->fields).triggerBoxEvents = (TriggerBoxEvents *)unaff_EDI[1].monitor;
      func_?(&(this->fields).triggerBoxEvents);
      pTVar3 = (this->fields).triggerBoxEvents;
      pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_EDI = (ObjectPrefab *)0x0;
      if (pTVar3 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
        pTVar3 = (this->fields).triggerBoxEvents;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (ObjectPrefab *)0x0;
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTriggerBox *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 2.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_triggerBoxEvents_TriggerEnter
               (MVTriggerBox *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
              (this_00,(this->fields)._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_triggerBoxEvents_TriggerExit
               (MVTriggerBox *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_00,(this->fields)._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

