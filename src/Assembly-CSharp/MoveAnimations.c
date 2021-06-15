
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Awake
               (MoveAnimations *this,MethodInfo *method)

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
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).moveAnimations;
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?(0);
    func_?(unaff_ESI,0,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                      MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__GetEnumerator__
                     );
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
  CStack_6.monitor = (MonitorData *)pLVar9->next;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
  CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
  uStack_1 = 0;
  do {
    cVar11 = func_?();
    if (cVar11 == '\0') {
      *puStack_7 = 0x66;
      uStack_1 = 0xffffffff;
      func_?(&CStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__Dispose__
                     );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__get_Current__
                          );
    pOVar12 = (Object__Class *)(this->fields)._.target;
    if (unaff_ESI == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOStack_13 = unaff_ESI[2].klass;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOStack_13,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar14 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
    }
    else {
      unaff_ESI[2].klass = pOVar12;
      if (pOVar12 == (Object__Class *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)(auStack_10 + 4),(Transform *)pOVar12,(MethodInfo *)0x0);
      pMVar16 = (MonitorData *)pVVar15->z;
      *(undefined8 *)&unaff_ESI[2].monitor = *(undefined8 *)pVVar15;
      unaff_ESI[3].monitor = pMVar16;
    }
    pOVar12 = unaff_ESI[4].klass;
    b = (Delegate *)func_?();
    pMVar17 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
    (b->fields).method_ptr = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_->methodPointer;
    (b->fields).method = pMVar17;
    (b->fields).m_target = (Object *)this;
    pOVar18 = (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pOVar12,b,(MethodInfo *)0x0);
    pOVar12 = (Object__Class *)0x0;
    if (pOVar18 != (Object__Class *)0x0) {
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)(pOVar18->_0).image ==
          TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
        pOVar12 = pOVar18;
      }
      if (pOVar12 == (Object__Class *)0x0) {
        func_?();
        goto code_?;
      }
    }
    unaff_ESI[4].klass = pOVar12;
  } while( true );
}


/* Void OnMoveAnimationDone(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_OnMoveAnimationDone
               (MoveAnimations *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).index;
  *piVar1 = *piVar1 + 1;
  this_00 = (this->fields).moveAnimations;
  if (this_00 != (List_1_MoveAnimationBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__get_Count__
                       );
    if ((this->fields).index < (int)pOVar2) {
      (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
      pUVar3 = (UnityAction_1_System_Single_ *)(this->fields).OnIntermediateMoveAnimationStopped;
      if (pUVar3 != (UnityAction_1_System_Single_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single__Invoke(pUVar3,extraTime,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pUVar3 = (UnityAction_1_System_Single_ *)(this->fields)._.OnMoveAnimationStopped;
      if (pUVar3 != (UnityAction_1_System_Single_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single__Invoke(pUVar3,extraTime,(MethodInfo *)0x0);
      }
      (this->fields).index = 0;
    }
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Play
               (MoveAnimations *this,float offsetTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).moveAnimations;
  if (this_00 != (List_1_MoveAnimationBase_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).index,
                        MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__get_Item_int_
                       );
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      (*(code *)pIVar1->klass[1]._0.castClass)(pIVar1);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Update
               (MoveAnimations *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
    (this->fields)._.testState = 0;
  }
  return;
}

