
/* Void SetStateTypes() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::
     EditorStateTransitionTableBase_SetStateTypes
               (EditorStateTransitionTableBase *this,MethodInfo *method)

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
  this_00 = (this->fields)._.table;
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
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
        pLStack_8->klass = (Link__Array__Class *)0x57;
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
      ;
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
      unaff_EDI = TypeInfo__ESStateBase;
      if (DStack_10.dictionary == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
        pDVar12 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
      }
      else {
        bVar13 = (TypeInfo__ESStateBase->_1).naturalAligment;
        if ((((DStack_10.dictionary)->klass->_1).naturalAligment < bVar13) ||
           (((DStack_10.dictionary)->klass->_1).typeHierarchy[bVar13 - 1] !=
            (Il2CppClass *)TypeInfo__ESStateBase)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        pDVar12 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
        if (bVar14) {
          pDVar12 = DStack_10.dictionary;
        }
        if (pDVar12 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)
        goto code_?;
      }
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
      ;
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      piVar15 = (int *)func_?();
      if ((pDVar12 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) ||
         (piVar15 == (int *)0x0)) goto code_?;
      if (*(Il2CppClass **)(*piVar15 + 0x20) != (TypeInfo__EditorEvent->_0).element_class) break;
      puVar16 = (undefined4 *)func_?(piVar15);
      (pDVar12->fields).table = (Int32__Array *)*puVar16;
    }
    func_?(piVar15,TypeInfo__EditorEvent);
  }
code_?:
  func_?(0);
  DStack_10.dictionary = extraout_EDX;
code_?:
  DStack_10.next = (int32_t)unaff_EDI;
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* EditorStateTransitionTableBase() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::EditorStateTransitionTableBase__ctor
               (EditorStateTransitionTableBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_IState_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
            );
  (this->fields)._.table = this_00;
  return;
}

