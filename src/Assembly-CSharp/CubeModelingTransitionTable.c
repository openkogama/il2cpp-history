
/* CubeModelingTransitionTable() */

void Assembly-CSharp.dll::CubeModelingTransitionTable::CubeModelingTransitionTable__ctor
               (CubeModelingTransitionTable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pCVar8 = this;
  puStack_9 = (undefined4 *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar10 = (pCVar8->fields)._.table;
  this = (CubeModelingTransitionTable *)0x0;
  pCStack_11 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__CubeModelingEvent,&this);
  pEStack_12 = (EditCubes *)func_?(TypeInfo__EditCubes);
  EditCubes::EditCubes__ctor(pEStack_12,(MethodInfo *)0x0);
  this_00 = (CubeModelTool__Class *)0x0;
  if (pDVar10 != (Dictionary_2_System_Object_IState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar10,(String *)pCStack_11,(CrossPlatformInputManager_VirtualButton *)pEStack_12,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar10 = (pCVar8->fields)._.table;
    uStack_13 = 1;
    pEStack_12 = (EditCubes *)func_?();
    pCStack_11 = (CrossPlatformInputManager_VirtualButton *)func_?();
    DeleteCubes::DeleteCubes__ctor((DeleteCubes *)pCStack_11,(MethodInfo *)0x0);
    this_00 = (CubeModelTool__Class *)0x0;
    if (pDVar10 != (Dictionary_2_System_Object_IState_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar10,(String *)pEStack_12,pCStack_11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar10 = (pCVar8->fields)._.table;
      uStack_14 = 2;
      pEStack_12 = (EditCubes *)func_?();
      pCStack_11 = (CrossPlatformInputManager_VirtualButton *)func_?();
      PaintCubes::PaintCubes__ctor((PaintCubes *)pCStack_11,(MethodInfo *)0x0);
      this_00 = (CubeModelTool__Class *)0x0;
      if (pDVar10 != (Dictionary_2_System_Object_IState_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar10,(String *)pEStack_12,pCStack_11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        this_00 = (CubeModelTool__Class *)(pCVar8->fields)._.table;
        uStack_15 = 3;
        pEStack_12 = (EditCubes *)func_?();
        pCStack_11 = (CrossPlatformInputManager_VirtualButton *)func_?();
        SprayCubes::SprayCubes__ctor((SprayCubes *)pCStack_11,(MethodInfo *)0x0);
        if (this_00 != (CubeModelTool__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_00,(String *)pEStack_12,pCStack_11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar10 = (pCVar8->fields)._.table;
          if (pDVar10 != (Dictionary_2_System_Object_IState_ *)0x0) {
            pDVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[WinningConditionType,System::Object]::
                     Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                 *)&stack0xffffffa0,
                                (Dictionary_2_WinningConditionType_System_Object_ *)pDVar10,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                               );
            auStack_6._0_4_ = pDVar16->dictionary;
            auStack_6._4_4_ = pDVar16->next;
            auStack_6._8_4_ = pDVar16->stamp;
            auStack_6._12_4_ = (pDVar16->current).key;
            auStack_6._16_4_ = (pDVar16->current).value;
            uStack_1 = 0;
            while( true ) {
              cVar17 = func_?();
              if (cVar17 == '\0') {
                *puStack_9 = 0xb5;
                uStack_1 = 0xffffffff;
                func_?();
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)auStack_6,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                                    );
              auStack_6._0_4_ =
                   MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
              ;
              piVar18 = (int *)func_?();
              this_00 = TypeInfo__CubeModelTool;
              if (piVar18 == (int *)0x0) {
                piVar19 = (int *)0x0;
              }
              else {
                bVar20 = (TypeInfo__CubeModelTool->_1).naturalAligment;
                if ((*(byte *)(*piVar18 + 0xb8) < bVar20) ||
                   (*(CubeModelTool__Class **)(*(int *)(*piVar18 + 100) + -4 + (uint)bVar20 * 4) !=
                    TypeInfo__CubeModelTool)) {
                  bVar21 = false;
                }
                else {
                  bVar21 = true;
                }
                piVar19 = (int *)0x0;
                if (bVar21) {
                  piVar19 = piVar18;
                }
                auStack_6._0_4_ = TypeInfo__CubeModelTool;
                if (piVar19 == (int *)0x0) goto code_?;
              }
              auStack_6._0_4_ =
                   MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
              ;
              piVar18 = (int *)func_?();
              if ((piVar19 == (int *)0x0) || (piVar18 == (int *)0x0)) goto code_?;
              if (*(Il2CppClass **)(*piVar18 + 0x20) !=
                  (TypeInfo__CubeModelingEvent->_0).element_class) break;
              piVar18 = (int *)func_?();
              piVar19[3] = *piVar18;
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  func_?();
  auStack_6._0_4_ = this_00;
code_?:
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

