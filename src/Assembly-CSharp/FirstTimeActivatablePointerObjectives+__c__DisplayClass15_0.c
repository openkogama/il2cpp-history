
/* Void <CreateBubble>b__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<>c__DisplayClass15_0::
     FirstTimeActivatablePointerObjectives_c_DisplayClass15_0__CreateBubble_b__0
               (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *this,
               TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  pFVar1 = (this->fields).__4__this;
  if (pFVar1 != (FirstTimeActivatablePointerObjectives *)0x0) {
    if ((pFVar1->fields).bubbleId != -1) {
      if (x == (TextBubbleController *)0x0) goto code_?;
      TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
                (x,(pFVar1->fields).bubbleId,(MethodInfo *)0x0);
    }
    pTVar2 = (Transform *)(this->fields).target;
    pFVar1 = (this->fields).__4__this;
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).target;
      if (this_00 != (RectTransform *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::Int32Enum,System::
        Single]::
        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                    *)pRVar3->m_YMin,(MethodInfo *)pRVar3->m_Width);
        pTVar2 = (Transform *)(this->fields).target;
        if (pTVar2 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
          uVar5 = pVVar4->y;
          pFVar6 = (this->fields).__4__this;
          if (pFVar6 != (FirstTimeActivatablePointerObjectives *)0x0) {
            fVar7 = (float)uVar5 + (pFVar6->fields).pointerBodyDirectionOffset.y;
            lifeTime = (pFVar6->fields).bubbleLifetimeWhenVisible;
            content = (pFVar6->fields).bubbleContent;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)(this->fields).__4__this,(MethodInfo *)0x0);
            if (x != (TextBubbleController *)0x0) {
              anchoredPosition.y = (float)content;
              anchoredPosition.x = lifeTime;
              iVar8 = TextBubbleController::TextBubbleController_ShowBubble2D
                                (x,anchoredPosition,
                                 (Vector2)((ulonglong)(uint)(fVar7 + fVar7) << 0x20),lifeTime,
                                 content,pTVar2,(MethodInfo *)0x0);
              if (pFVar1 != (FirstTimeActivatablePointerObjectives *)0x0) {
                (pFVar1->fields).bubbleId = iVar8;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

