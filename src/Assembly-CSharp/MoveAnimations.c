
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).moveAnimations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<MoveAnimationBase>__GetEnumerator__
                       );
    uStack_9 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    uStack_1 = 1;
    pLStack_10 = &LStack_6;
    while( true ) {
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__MoveNext__
                          );
        pOVar12 = LStack_6._current;
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveAnimationBase>__Dispose__
                     ,(MethodInfo *)unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        RStack_13 = (RegexCharClass_SingleRange)LStack_6._current;
        pDStack_14 = (Delegate *)(this->fields)._.target;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Target_already_set);
          cRam_? = '\x01';
        }
        pMStack_15 = *(MethodInfo **)((int)pOVar12 + 0x14);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pMStack_15,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
        }
        else {
          *(Delegate **)((int)pOVar12 + 0x14) = pDStack_14;
          func_?((int)pOVar12 + 0x14);
          if (pDStack_14 == (Delegate *)0x0) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)(auStack_8 + 4),(Transform *)pDStack_14,(MethodInfo *)0x0)
          ;
          fVar17 = pVVar16->z;
          *(undefined8 *)((int)pOVar12 + 0x18) = *(undefined8 *)pVVar16;
          *(float *)((int)pOVar12 + 0x20) = fVar17;
        }
        pDStack_14 = *(Delegate **)((int)pOVar12 + 0x24);
        b = (Delegate *)func_?();
        pMStack_15 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
        pIVar18 = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_->virtualMethodPointer;
        (b->fields).method = MethodInfo__MoveAnimations__OnMoveAnimationDone_float_;
        (b->fields).m_target = (Object *)this;
        (b->fields).method_ptr = pIVar18;
        func_?();
        uStack_19 = pMStack_15->parameters_count;
        (b->fields).method_code = b;
        cVar20 = func_?();
        if ((cVar20 == '\0') || (uStack_19 != 1)) {
          (b->fields).method_code = (b->fields).m_target;
          puVar21 = (b->fields).method_ptr;
        }
        else {
          puVar21 = &UNK_?;
        }
        (b->fields).invoke_impl = puVar21;
        (b->fields).extra_arg = &UNK_?;
        unaff_EDI = pDStack_14;
        LStack_6._index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDStack_14,b,(MethodInfo *)0x0);
        if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)LStack_6._index !=
            (MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)0x0) break;
        LStack_6._version = 0;
        *(undefined4 *)((int)RStack_13 + 0x24) = 0;
        LStack_6._index = (int)RStack_13 + 0x24;
        LStack_6._list = (List_1_System_Object_ *)&UNK_?;
        func_?();
      }
      pMVar22 = (MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)0x0;
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)
          (((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)LStack_6._index)->_0).image
          == TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
        pMVar22 = (MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)LStack_6._index;
      }
      LStack_6._version = (int32_t)TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate;
      if (pMVar22 == (MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)0x0) break;
      *(MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class **)((int)RStack_13 + 0x24) = pMVar22
      ;
      LStack_6._version = (int32_t)(MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)0x0;
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)
          (((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)LStack_6._index)->_0).image
          == TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate) {
        LStack_6._version = LStack_6._index;
      }
      if ((MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)LStack_6._version ==
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate__Class *)0x0) {
        LStack_6._version = (int32_t)TypeInfo__MoveAnimationBase__OnMoveAnimationStoppedDelegate;
        LStack_6._list = (List_1_System_Object_ *)&UNK_?;
        LStack_6._version = func_?();
        LStack_6._index = (int32_t)extraout_ECX;
        break;
      }
      LStack_6._index = (int)RStack_13 + 0x24;
      LStack_6._list = (List_1_System_Object_ *)&UNK_?;
      func_?();
    }
    LStack_6._list = (List_1_System_Object_ *)&UNK_?;
    func_?();
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  pLVar1 = (this->fields).moveAnimations;
  iVar2 = (this->fields).index + 1;
  (this->fields).index = iVar2;
  if (pLVar1 != (List_1_MoveAnimationBase_ *)0x0) {
    if (iVar2 < (pLVar1->fields)._size) {
      (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
      if ((this->fields).OnIntermediateMoveAnimationStopped !=
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        pMVar3 = (this->fields).OnIntermediateMoveAnimationStopped;
        (*(pMVar3->fields)._._.invoke_impl)
                  ((pMVar3->fields)._._.method_code,extraTime,(pMVar3->fields)._._.method);
        return;
      }
    }
    else {
      if ((this->fields)._.OnMoveAnimationStopped !=
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        pMVar3 = (this->fields)._.OnMoveAnimationStopped;
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

