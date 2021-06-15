
/* CEEditorStateTransitionTableUUI(Vector3) */

void Assembly-CSharp.dll::CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
               (CEEditorStateTransitionTableUUI *this,Vector3 centerPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  EditorStateTransitionTableBase::EditorStateTransitionTableBase__ctor
            ((EditorStateTransitionTableBase *)this,(MethodInfo *)0x0);
  pDVar1 = (this_00->fields)._._.table;
  this = (CEEditorStateTransitionTableUUI *)0x34;
  pSVar2 = (String *)func_?(TypeInfo__EditorEvent,&this);
  pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__CERoamUUI);
  method_00 = (MethodInfo *)0x0;
  (pCVar3->fields).m_ReleasedFrame = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
  pCVar3[1].klass = (CrossPlatformInputManager_VirtualButton__Class *)centerPos.x;
  pCVar3[1].monitor = (MonitorData *)centerPos.y;
  pCVar3[1].fields._name_k__BackingField = (String *)centerPos.z;
  if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar1 = (this_00->fields)._._.table;
    centerPos.z = (float)func_?(TypeInfo__EditorEvent);
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__CEEditBodyUUI);
    pCVar3[1].klass = (CrossPlatformInputManager_VirtualButton__Class *)0xffffffff;
    ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,(String *)centerPos.z,pCVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (this_00->fields)._._.table;
      centerPos.z = (float)func_?(TypeInfo__EditorEvent);
      pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                func_?(TypeInfo__CEAvatarAccessoryUUI);
      ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,(String *)centerPos.z,pCVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        pDVar1 = (this_00->fields)._._.table;
        centerPos.z = (float)func_?(TypeInfo__EditorEvent);
        pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                  func_?(TypeInfo__CEEnterCubeTutorial);
        (pCVar3->fields).m_ReleasedFrame = 0x3f800000;
        ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,(String *)centerPos.z,pCVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          centerPos.z = (float)(this_00->fields)._._.table;
          func_?(TypeInfo__EditorEvent);
          pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                    func_?(TypeInfo__CEEditCubeTutorial);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (pCVar3->fields).m_ReleasedFrame = -1;
          *(undefined4 *)&pCVar3[1].fields._matchWithInputManager_k__BackingField = 0x40800000;
          pCVar3[1].fields.m_LastPressedFrame = 0x41800000;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                             ((Vector3 *)&stack0xffffffb8,(MethodInfo *)0x0);
          uVar5 = pVVar4->y;
          fVar6 = pVVar4->z;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                             ((Vector3 *)&stack0xffffffb8,(MethodInfo *)0x0);
          uVar7 = pVVar4->y;
          a.y = (float)uVar5;
          a.x = (float)uVar7;
          a.z = fVar6;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffb8,a,*pVVar4,(MethodInfo *)0x0);
          pVVar4 = (Vector3 *)pVVar8->y;
          fVar6 = pVVar8->z;
          puVar9 = &UNK_?;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                              (pVVar4,(MethodInfo *)0x0);
          a_00.y = (float)pVVar4;
          a_00.x = (float)puVar9;
          a_00.z = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                    ((Vector3 *)&stack0xffffffb8,a_00,*pVVar8,(MethodInfo *)0x0);
          pSVar2 = (String *)&stack0xffffffb8;
          puVar10 = (undefined8 *)func_?();
          uVar11 = *puVar10;
          pCVar12 = *(CrossPlatformInputManager_VirtualButton__Class **)(puVar10 + 1);
          pCVar3[1].fields.m_ReleasedFrame = (int)uVar11;
          pCVar3[1].fields.m_Pressed = (char)((ulonglong)uVar11 >> 0x20);
          *(int3 *)&pCVar3[1].fields.field_0x11 = (int3)((ulonglong)uVar11 >> 0x28);
          pCVar3[2].klass = pCVar12;
          uVar5 = 0;
          func_?();
          *(undefined4 *)((int)&pCVar3[2].fields._name_k__BackingField + 2) = uVar5;
          *(undefined2 *)&pCVar3[2].fields.field_0x6 = 0;
          this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                    );
          pCVar3[2].fields.m_LastPressedFrame = (int32_t)this_01;
          this_02 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
          pCVar3[3].fields._name_k__BackingField = (String *)this_02;
          pCVar3[3].fields.field_0x5 = 1;
          ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
          if (centerPos.z != 0.0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)centerPos.z,pSVar2,pCVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                      );
            pDVar1 = (this_00->fields)._._.table;
            centerPos.z = (float)func_?(TypeInfo__EditorEvent);
            pCVar3 = (CrossPlatformInputManager_VirtualButton *)
                      func_?(TypeInfo__CELeaveCubeTutorial);
            ESStateBase::ESStateBase__ctor((ESStateBase *)pCVar3,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar1,(String *)centerPos.z,pCVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (this_00->fields)._._.table;
              centerPos.z = (float)func_?(TypeInfo__EditorEvent);
              this_03 = (ESCubeEdit *)func_?(TypeInfo__ESCubeEdit);
              ESCubeEdit::ESCubeEdit__ctor(this_03,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_System_Object_IState_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)pDVar1,(String *)centerPos.z,
                           (CrossPlatformInputManager_VirtualButton *)this_03,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                          );
                EditorStateTransitionTableBase::EditorStateTransitionTableBase_SetStateTypes
                          ((EditorStateTransitionTableBase *)this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

