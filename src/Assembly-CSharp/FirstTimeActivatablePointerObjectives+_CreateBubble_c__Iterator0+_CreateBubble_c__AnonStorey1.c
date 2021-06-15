
/* Void <>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::
     FirstTimeActivatablePointerObjectives+<CreateBubble>c__Iterator0+<CreateBubble>c__AnonStorey1::
     FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1___m__0
               (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1
                *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  auStack_1._8_4_ = (String *)0x0;
  auStack_1._12_4_ = 0.0;
  pFVar2 = (this->fields).__f__ref_0;
  if ((pFVar2 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0) &&
     (pFVar3 = (pFVar2->fields)._this, pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0)) {
    bubbleId = (pFVar3->fields).bubbleId;
    if (bubbleId != -1) {
      if (((pFVar2 == (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0) ||
          (pFVar3 == (FirstTimeActivatablePointerObjectives *)0x0)) ||
         (x == (TextBubbleController *)0x0)) goto code_?;
      TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
                (x,bubbleId,(MethodInfo *)0x0);
      pFVar2 = (this->fields).__f__ref_0;
    }
    if (pFVar2 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0) {
      pFStack_4 = (pFVar2->fields)._this;
      pTVar5 = (Transform *)(this->fields).target;
      if (pTVar5 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_7 + 4),pTVar5,(MethodInfo *)0x0);
        uVar8 = pVVar6->x;
        uVar9 = pVVar6->y;
        fVar10 = pVVar6->z;
        this_00 = (this->fields).target;
        _Stack_10 = (_union_86)uVar8;
        fStack_11 = (float)uVar9;
        if (this_00 != (RectTransform *)0x0) {
          pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)auStack_7,this_00,(MethodInfo *)0x0);
          auStack_1._0_4_ = pRVar12->m_XMin;
          auStack_1._4_4_ = pRVar12->m_YMin;
          auStack_1._8_4_ = pRVar12->m_Width;
          auStack_1._12_4_ = pRVar12->m_Height;
          fVar13 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                   CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                             ((CrossPlatformInputManager_VirtualAxis *)auStack_1,(MethodInfo *)0x0)
          ;
          pcStack_14 = (char *)0x0;
          auStack_1._0_4_ = &uStack_15;
          uStack_15._0_4_ = (Il2CppImage *)0x0;
          uStack_15._4_4_ = (void *)0x0;
          auStack_1._8_4_ = fVar13 * _UNK_?;
          auStack_7._0_4_ = 0.0;
          auStack_1._12_4_ = 0.0;
          auStack_1._4_4_ = (MonitorData *)0x0;
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.y = fStack_11;
          a.x = (float)_Stack_10.dummy;
          a.z = fVar10;
          b.z = (float)pcStack_14;
          b.x = (float)(Il2CppImage *)uStack_15;
          b.y = (float)uStack_15._4_4_;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)(auStack_7 + 4),a,b,(MethodInfo *)0x0);
          uVar16._0_4_ = pVVar6->x;
          uVar16._4_4_ = pVVar6->y;
          fVar10 = pVVar6->z;
          _Stack_10 = (_union_86)(undefined4)uVar16;
          fStack_11 = (float)uVar16._4_4_;
          if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector2);
            uVar16 = CONCAT44(fStack_11,_Stack_10.dummy);
          }
          v.z = fVar10;
          v.x = (float)(int)uVar16;
          v.y = (float)(int)((ulonglong)uVar16 >> 0x20);
          anchoredPosition =
               UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                         (v,(MethodInfo *)0x0);
          pTVar5 = (Transform *)(this->fields).target;
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)(auStack_7 + 4),pTVar5,(MethodInfo *)0x0);
            VVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                               (*pVVar6,(MethodInfo *)0x0);
            pFVar2 = (this->fields).__f__ref_0;
            if ((pFVar2 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0) &&
               (pFVar3 = (pFVar2->fields)._this,
               pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0)) {
              pVVar18 = &(pFVar3->fields).pointerBodyDirectionOffset;
              _Stack_10 = (_union_86)pVVar18->x;
              fStack_11 = (pFVar3->fields).pointerBodyDirectionOffset.y;
              VVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                                 (VVar17,*pVVar18,(MethodInfo *)0x0);
              VVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                                 (VVar17,2.0,(MethodInfo *)0x0);
              pFVar2 = (this->fields).__f__ref_0;
              fStack_11 = VVar17.x;
              _Stack_8.__klassIndex = (TypeDefinitionIndex)VVar17.y;
              if ((pFVar2 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0)
                 && (((pFVar3 = (pFVar2->fields)._this,
                      pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0 &&
                      (fVar10 = (pFVar3->fields).bubbleLifetimeWhenVisible,
                      pFVar2 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)
                                0x0)) && (pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0))))
              {
                content = (pFVar3->fields).bubbleContent;
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pFVar3,(MethodInfo *)0x0);
                if (x != (TextBubbleController *)0x0) {
                  VVar17.y = (float)_Stack_8.dummy;
                  VVar17.x = fStack_11;
                  iVar19 = TextBubbleController::TextBubbleController_ShowBubble2D
                                     (x,anchoredPosition,VVar17,fVar10,content,pTVar5,
                                      (MethodInfo *)0x0);
                  if (pFStack_4 != (FirstTimeActivatablePointerObjectives *)0x0) {
                    (pFStack_4->fields).bubbleId = iVar19;
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
code_?:
  func_?(0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

