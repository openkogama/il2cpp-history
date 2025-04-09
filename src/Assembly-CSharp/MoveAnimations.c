
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Awake
               (MoveAnimations *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__GetEnumerator__
                   );
    func_?(&MethodInfo__MoveAnimations__OnMoveAnimationDone_float_);
    func_?(&TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).moveAnimations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    uStack_9 = 0;
    uStack_1 = 1;
    pLStack_10 = &LStack_8;
    while( true ) {
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__Dispose__
                     ,(MethodInfo *)unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (this->fields)._.target;
        RStack_12 = (RegexCharClass_SingleRange)LStack_8._current;
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Target_already_set);
          cRam_? = '\x01';
        }
        pMStack_13 = (MethodInfo *)((int)RStack_12 + 0x14);
        pDStack_14 = (Delegate *)pMStack_13->methodPointer;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pDStack_14,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
        }
        else {
          pMStack_13->methodPointer = (Il2CppMethodPointer)this_01;
          func_?(pMStack_13);
          if (this_01 == (Transform *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)(auStack_7 + 4),this_01,(MethodInfo *)0x0);
          fVar16 = pVVar15->z;
          *(undefined8 *)((int)RStack_12 + 0x18) = *(undefined8 *)pVVar15;
          *(float *)((int)RStack_12 + 0x20) = fVar16;
        }
        RStack_12 = (RegexCharClass_SingleRange)((int)RStack_12 + 0x24);
        pDStack_14 = *(Delegate **)RStack_12;
        pDVar17 = (Delegate *)func_?();
        pMVar18 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
        pMStack_13 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
        (pDVar17->fields).method_ptr =
             MethodInfo__MoveAnimations__OnMoveAnimationDone_float_->virtualMethodPointer;
        (pDVar17->fields).method = pMVar18;
        (pDVar17->fields).m_target = (Object *)this;
        func_?();
        uStack_19 = pMStack_13->parameters_count;
        (pDVar17->fields).method_code = pDVar17;
        cVar20 = func_?();
        if ((cVar20 == '\0') || (uStack_19 != 1)) {
          (pDVar17->fields).method_code = (pDVar17->fields).m_target;
          puVar21 = (pDVar17->fields).method_ptr;
        }
        else {
          puVar21 = &UNK_?;
        }
        (pDVar17->fields).invoke_impl = puVar21;
        (pDVar17->fields).extra_arg = &UNK_?;
        unaff_EDI = pDStack_14;
        LStack_8._index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDStack_14,pDVar17,(MethodInfo *)0x0);
        LStack_8._version = (int32_t)TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate;
        if ((Delegate *)LStack_8._index != (Delegate *)0x0) break;
        LStack_8._version = 0;
        LStack_8._index._0_2_ = RStack_12.First;
        LStack_8._index._2_2_ = RStack_12.Last;
        *(undefined4 *)RStack_12 = 0;
        LStack_8._list = (List_1_System_Object_ *)&UNK_?;
        func_?();
      }
      pDVar17 = (Delegate *)0x0;
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)
          ((Delegate *)LStack_8._index)->klass ==
          TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
        pDVar17 = (Delegate *)LStack_8._index;
      }
      if (pDVar17 == (Delegate *)0x0) break;
      *(Delegate **)RStack_12 = pDVar17;
      LStack_8._version = (int32_t)(Delegate *)0x0;
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)
          ((Delegate *)LStack_8._index)->klass ==
          TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
        LStack_8._version = LStack_8._index;
      }
      if ((Delegate *)LStack_8._version == (Delegate *)0x0) {
        LStack_8._version = (int32_t)TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate;
        LStack_8._list = (List_1_System_Object_ *)&UNK_?;
        LStack_8._4_8_ = func_?();
        break;
      }
      LStack_8._index._0_2_ = RStack_12.First;
      LStack_8._index._2_2_ = RStack_12.Last;
      LStack_8._list = (List_1_System_Object_ *)&UNK_?;
      func_?();
    }
    LStack_8._list = (List_1_System_Object_ *)&UNK_?;
    func_?();
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnMoveAnimationDone(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_OnMoveAnimationDone
               (MoveAnimations *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__get_Count__)
    ;
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).index;
  *piVar1 = *piVar1 + 1;
  pLVar2 = (this->fields).moveAnimations;
  if (pLVar2 != (List_1_MoveAnimationBase_ *)0x0) {
    if ((this->fields).index < (pLVar2->fields)._size) {
      (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
      pMVar3 = (this->fields).OnIntermediateMoveAnimationStopped;
      if (pMVar3 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        (*(pMVar3->fields)._._.invoke_impl)
                  ((pMVar3->fields)._._.method_code,extraTime,(pMVar3->fields)._._.method);
        return;
      }
    }
    else {
      pMVar3 = (this->fields)._.OnMoveAnimationStopped;
      if (pMVar3 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        (*(pMVar3->fields)._._.invoke_impl)
                  ((pMVar3->fields)._._.method_code,extraTime,(pMVar3->fields)._._.method);
      }
      (this->fields).index = 0;
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimations::MoveAnimations_Play
               (MoveAnimations *this,float offsetTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).moveAnimations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).index,
                       MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      (**(code **)(*(int *)RVar1 + 0xe0))();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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

