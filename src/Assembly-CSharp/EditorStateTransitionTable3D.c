
/* EditorStateTransitionTable3D(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
               (EditorStateTransitionTable3D *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (this_00->fields)._._.table;
  this = (EditorStateTransitionTable3D *)0x0;
  pSVar2 = (String *)func_?(TypeInfo__EditorEvent,&this);
  this_01 = (ESCubeEdit *)func_?(TypeInfo__ESCubeEdit);
  ESCubeEdit::ESCubeEdit__ctor(this_01,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar1 = (this_00->fields)._._.table;
    pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
    this_02 = (ESRotating *)func_?(TypeInfo__ESRotating);
    ESRotating::ESRotating__ctor(this_02,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (this_00->fields)._._.table;
      pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
      pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__ESSelection);
      pCVar4 = (CrossPlatformInputManager_VirtualButton__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      pCVar3[1].klass = pCVar4;
      ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
      *(ContextMenuController **)&pCVar3[1].fields._matchWithInputManager_k__BackingField =
           contextMenuController;
      pCVar3[1].fields.m_LastPressedFrame = (int32_t)gizmoController;
      if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,pSVar2,pCVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        pDVar1 = (this_00->fields)._._.table;
        pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
        pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__ESTerrainEdit)
        ;
        ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,pSVar2,pCVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar1 = (this_00->fields)._._.table;
          pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
          pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__ESWaitForSelected);
          *(undefined1 *)&(pCVar3->fields).m_ReleasedFrame = 1;
          ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)pDVar1,pSVar2,pCVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                      );
            pDVar1 = (this_00->fields)._._.table;
            pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
            this_03 = (ESWaitForGroup *)func_?(TypeInfo__ESWaitForGroup);
            ESWaitForGroup::ESWaitForGroup__ctor(this_03,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (this_00->fields)._._.table;
              pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
              this_04 = (ESTranslate *)func_?(TypeInfo__ESTranslate);
              ESTranslate::ESTranslate__ctor(this_04,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                          );
                pDVar1 = (this_00->fields)._._.table;
                pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                this_05 = (ESWaitForClone *)func_?(TypeInfo__ESWaitForClone);
                ESWaitForClone::ESWaitForClone__ctor(this_05,(MethodInfo *)0x0);
                if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_05,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            );
                  pDVar1 = (this_00->fields)._._.table;
                  pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                  this_06 = (ESAddLink *)func_?(TypeInfo__ESAddLink);
                  ESAddLink::ESAddLink__ctor(this_06,(MethodInfo *)0x0);
                  if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    String,UnityStandardAssets::CrossPlatformInput::
                    CrossPlatformInputManager+VirtualButton]::
                    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)this_06,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                              );
                    pDVar1 = (this_00->fields)._._.table;
                    pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                             func_?(TypeInfo__ESWalkMode);
                    ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
                    if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      String,UnityStandardAssets::CrossPlatformInput::
                      CrossPlatformInputManager+VirtualButton]::
                      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                  *)pDVar1,pSVar2,pCVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                );
                      pDVar1 = (this_00->fields)._._.table;
                      pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                      pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                               func_?(TypeInfo__ESWaitForPlayModeAvatar);
                      *(undefined4 *)&(pCVar3->fields).m_Pressed = 5;
                      ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
                      if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        String,UnityStandardAssets::CrossPlatformInput::
                        CrossPlatformInputManager+VirtualButton]::
                        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                    *)pDVar1,pSVar2,pCVar3,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                  );
                        pDVar1 = (this_00->fields)._._.table;
                        pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                        pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                                 func_?(TypeInfo__ESWaitForBuildModeAvatar);
                        ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
                        if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          String,UnityStandardAssets::CrossPlatformInput::
                          CrossPlatformInputManager+VirtualButton]::
                          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                      *)pDVar1,pSVar2,pCVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                    );
                          pDVar1 = (this_00->fields)._._.table;
                          pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                          this_07 = (ESInsert *)func_?(TypeInfo__ESInsert);
                          ESInsert::ESInsert__ctor(this_07,(MethodInfo *)0x0);
                          if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            String,UnityStandardAssets::CrossPlatformInput::
                            CrossPlatformInputManager+VirtualButton]::
                            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                        *)pDVar1,pSVar2,
                                       (CrossPlatformInputManager_VirtualButton *)this_07,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                      );
                            pDVar1 = (this_00->fields)._._.table;
                            pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                            pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                                     func_?(TypeInfo__ESAddObjectLink);
                            ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
                                      ((ESLeaveCubeTutorial *)pCVar3,(MethodInfo *)0x0);
                            if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              String,UnityStandardAssets::CrossPlatformInput::
                              CrossPlatformInputManager+VirtualButton]::
                              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                          *)pDVar1,pSVar2,pCVar3,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                        );
                              pDVar1 = (this_00->fields)._._.table;
                              pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                              this_08 = (CEEnterCubeTutorial *)
                                        func_?(TypeInfo__CEEnterCubeTutorial);
                              CEEnterCubeTutorial::CEEnterCubeTutorial__ctor
                                        (this_08,(MethodInfo *)0x0);
                              if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                String,UnityStandardAssets::CrossPlatformInput::
                                CrossPlatformInputManager+VirtualButton]::
                                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                            *)pDVar1,pSVar2,
                                           (CrossPlatformInputManager_VirtualButton *)this_08,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                          );
                                pDVar1 = (this_00->fields)._._.table;
                                pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                                this_09 = (CEEditCubeTutorial *)
                                          func_?(TypeInfo__CEEditCubeTutorial);
                                CEEditCubeTutorial::CEEditCubeTutorial__ctor
                                          (this_09,(MethodInfo *)0x0);
                                if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  String,UnityStandardAssets::CrossPlatformInput::
                                  CrossPlatformInputManager+VirtualButton]::
                                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                              *)pDVar1,pSVar2,
                                             (CrossPlatformInputManager_VirtualButton *)this_09,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                            );
                                  pDVar1 = (this_00->fields)._._.table;
                                  pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                                  pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                                           func_?(TypeInfo__ESLeaveCubeTutorial);
                                  ESStateBase::ESStateBase__ctor
                                            ((ESStateBase *)pCVar3,(MethodInfo *)0x0);
                                  if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::String,UnityStandardAssets::CrossPlatformInput::
                                    CrossPlatformInputManager+VirtualButton]::
                                    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                                *)pDVar1,pSVar2,pCVar3,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                              );
                                    pDVar1 = (this_00->fields)._._.table;
                                    pSVar2 = (String *)func_?(TypeInfo__EditorEvent);
                                    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                                             func_?(TypeInfo__ESAddToMarketPlaceState);
                                    ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
                                              ((ESLeaveCubeTutorial *)pCVar3,(MethodInfo *)0x0);
                                    if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::String,UnityStandardAssets::
                                      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
                                      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                                  *)pDVar1,pSVar2,pCVar3,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                                );
                                      EditorStateTransitionTableBase::
                                      EditorStateTransitionTableBase_SetStateTypes
                                                ((EditorStateTransitionTableBase *)this_00,
                                                 (MethodInfo *)0x0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

