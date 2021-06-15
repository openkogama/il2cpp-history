
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Awake(MoveAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).keyFrameCallbacks;
  if (TypeInfo__MoveAnimation->static_fields->__f__am_cache0 ==
      (Comparison_1_KeyFrameCallback_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Comparison<KeyFrameCallback>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__MoveAnimation___Awake_m__0_KeyFrameCallback__KeyFrameCallback_,
               MethodInfo__System__Comparison<KeyFrameCallback>__Comparison_System__Object__void__);
    TypeInfo__MoveAnimation->static_fields->__f__am_cache0 =
         (Comparison_1_KeyFrameCallback_ *)this_01;
  }
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_2
              (this_00,(Comparison_1_VoxelHit_ *)
                       TypeInfo__MoveAnimation->static_fields->__f__am_cache0,
               MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__Sort_System__Comparison<KeyFrameCallback>_
              );
    pTVar1 = (this->fields)._.target;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Target_not_set,(MethodInfo *)0x0);
    }
    else {
      pTVar1 = (this->fields)._.target;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_4,pTVar1,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      (this->fields)._.originalLocalPos.x = pVVar3->x;
      (this->fields)._.originalLocalPos.y = fVar5;
      (this->fields)._.originalLocalPos.z = fVar6;
    }
    pAVar7 = (this->fields).animationCurve;
    if (pAVar7 != (AnimationCurve *)0x0) {
      pKVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar7,(MethodInfo *)0x0);
      pAVar7 = (this->fields).animationCurve;
      if (pAVar7 != (AnimationCurve *)0x0) {
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                          (pAVar7,(MethodInfo *)0x0);
        if (pKVar8 != (Keyframe__Array *)0x0) {
          VStack_4.x = 0.0;
          if (iVar9 - 1U < pKVar8->max_length) {
            fVar10 = (float10)func_?(pKVar8->vector + iVar9 + -1);
            (this->fields).doneTime = (float)fVar10;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar11 = func_?(0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void EvaluateKeyFrameCallbacks(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_EvaluateKeyFrameCallbacks
               (MoveAnimation *this,float timePassedSincePlay,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).keyFrameCallbacks;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_9._0_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
      ;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x46;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (KeyFrameCallback *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                          );
      if (this_01 == (KeyFrameCallback *)0x0) break;
      KeyFrameCallback::KeyFrameCallback_Evaluate
                (this_01,timePassedSincePlay,(this->fields).animationCurve,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Play
               (MoveAnimation *this,float offsetTime,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff24;
  puVar5 = &stack0xffffff24;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  auStack_6._12_4_ = (Object *)0x0;
  func_?(&fStack_7,0,0x40);
  func_?();
  VStack_8.z = (float)&stack0xffffff24;
  puStack_4 = &stack0xffffff24;
  ppIStack_9 = (Il2CppType **)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar10 = (this->fields)._.target;
  (this->fields)._.state = 2;
  (this->fields).beginTime = (float)ppIStack_9 - offsetTime;
  if (pTVar10 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar10,(this->fields)._.originalLocalPos,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).keyFrameCallbacks;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                         );
      auStack_6._0_4_ = pLVar11->l;
      auStack_6._4_4_ = pLVar11->next;
      auStack_6._8_4_ = pLVar11->ver;
      auStack_6._12_4_ = (pLVar11->current).rgba;
      uStack_1 = 0;
      while (cVar13 = func_?(), cVar13 != '\0') {
        this_01 = (KeyFrameCallback *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)auStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                            );
        if (this_01 == (KeyFrameCallback *)0x0) goto code_?;
        KeyFrameCallback::KeyFrameCallback_Reset(this_01,(MethodInfo *)0x0);
      }
      *(undefined4 *)VStack_8.z = 99;
      uStack_1 = 0xffffffff;
      method_00 = (MethodInfo *)auStack_6;
      func_?(method_00,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                     );
      pTVar10 = (this->fields)._.target;
      if (pTVar10 != (Transform *)0x0) {
        pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_worldToLocalMatrix((Matrix4x4 *)&stack0xffffff30,pTVar10,method_00);
        fStack_7 = pMVar14->m00;
        fStack_15 = pMVar14->m10;
        fStack_16 = pMVar14->m20;
        fStack_17 = pMVar14->m30;
        fStack_18 = pMVar14->m01;
        fStack_19 = pMVar14->m11;
        fStack_20 = pMVar14->m21;
        fStack_21 = pMVar14->m31;
        fStack_22 = pMVar14->m02;
        fStack_23 = pMVar14->m12;
        fStack_24 = pMVar14->m22;
        fStack_25 = pMVar14->m32;
        fStack_26 = pMVar14->m03;
        fStack_27 = pMVar14->m13;
        fStack_28 = pMVar14->m23;
        fStack_29 = pMVar14->m33;
        pTVar10 = (this->fields).moveTo;
        if (pTVar10 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    (&VStack_8,pTVar10,(MethodInfo *)0x0);
          puVar30 = (undefined8 *)func_?(&VStack_8,&fStack_7);
          unique0x0000a400 = *puVar30;
          fVar31 = *(float *)(puVar30 + 1);
          pTVar10 = (this->fields)._.target;
          if (pTVar10 != (Transform *)0x0) {
            pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition
                                ((Vector3 *)(auStack_12 + 4),pTVar10,(MethodInfo *)0x0);
            VStack_8.y = pVVar32->x;
            VStack_8.z = pVVar32->y;
            fVar33 = pVVar32->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a.z = fVar31;
            a.x = (float)auStack_6._20_4_;
            a.y = (float)ppIStack_9;
            b.z = fVar33;
            b.x = VStack_8.y;
            b.y = VStack_8.z;
            pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)(auStack_6 + 0x10),a,b,(MethodInfo *)0x0);
            fVar33 = pVVar32->y;
            fVar31 = pVVar32->z;
            (this->fields).direction.x = pVVar32->x;
            (this->fields).direction.y = fVar33;
            (this->fields).direction.z = fVar31;
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?(0,0);
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void Stopped(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Stopped
               (MoveAnimation *this,float extraTime,MethodInfo *method)

{
  (this->fields)._.state = 1;
  this_00 = (UnityAction_1_System_Single_ *)(this->fields)._.OnMoveAnimationStopped;
  if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single__Invoke(this_00,extraTime,(MethodInfo *)0x0);
  }
  return;
}


/* Void SubscribeToKeyFrame(String, Action) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_SubscribeToKeyFrame
               (MoveAnimation *this,String *keyFrameName,Action *callback,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).keyFrameCallbacks;
  piStack_9 = (int *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    iVar10 = func_?(0);
  }
  else {
    piStack_9 = (int *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_00,
                        MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_7.monitor = (MonitorData *)pLVar11->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    do {
      cVar12 = func_?();
      piVar13 = piStack_9;
      if (cVar12 == '\0') {
        *piStack_9 = 0x65;
        goto code_?;
      }
      this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                          );
      if (this_01 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
      goto code_?;
      a = (String *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar14 = mscorlib.dll::System::String::String_op_Equality(a,keyFrameName,(MethodInfo *)0x0);
    } while (bVar14 == 0);
    mscorlib.dll::System::Delegate::Delegate_Combine
              ((Delegate *)this_01[1].monitor,(Delegate *)callback,(MethodInfo *)0x0);
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)TypeInfo__System__Action
    ;
    pMVar15 = (MonitorData *)func_?();
    piVar13 = piStack_9;
    this_01[1].monitor = pMVar15;
    *piStack_9 = 0x6f;
code_?:
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   );
    iVar10 = iStack_6;
    if (iStack_6 == 0) {
      if (*piVar13 != 0x6f) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_find_keyFrame,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?(iVar10,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Update
               (MoveAnimation *this,MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state == 2) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).doneTime;
    this_00 = (this->fields)._.target;
    this_01 = (this->fields).animationCurve;
    fVar3 = (this->fields).direction.z;
    fVar1 = fVar1 - (this->fields).beginTime;
    if (fVar2 < fVar1) {
      fVar1 = (this->fields).direction.x;
      fVar4 = (this->fields).direction.y;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,fVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = fVar4;
      a.x = fVar1;
      a.z = fVar3;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffec,a,fVar2,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      this = (MoveAnimation *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_00,*pVVar5,(MethodInfo *)0x0);
      this_02 = (UnityAction_1_System_Single_ *)(this_03->fields)._.OnMoveAnimationStopped;
      (this_03->fields)._.state = 1;
      if (this_02 != (UnityAction_1_System_Single_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single__Invoke
                  (this_02,0.0 - (this_03->fields).doneTime,(MethodInfo *)0x0);
      }
    }
    else {
      fVar2 = (this->fields).direction.x;
      if (this_01 == (AnimationCurve *)0x0) {
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,fVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_00.y = fVar1;
      a_00.x = fVar2;
      a_00.z = fVar3;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffec,a_00,fVar1,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      uVar7 = pVVar5->x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_00,*pVVar5,(MethodInfo *)0x0);
      this = (MoveAnimation *)uVar7;
    }
    MoveAnimation_EvaluateKeyFrameCallbacks(this_03,(float)this,(MethodInfo *)0x0);
  }
  return;
}


/* Int32 <Awake>m__0(KeyFrameCallback, KeyFrameCallback) */

int32_t Assembly-CSharp.dll::MoveAnimation::MoveAnimation__Awake_m__0
                  (KeyFrameCallback *a,KeyFrameCallback *b,MethodInfo *method)

{
  if (a != (KeyFrameCallback *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)a,(MethodInfo *)0x0);
    if (b != (KeyFrameCallback *)0x0) {
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)b,(MethodInfo *)0x0);
      return (int)pOVar1 - (int)pOVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

