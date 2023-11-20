
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
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                  ((Rect *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
        pTVar2 = (Transform *)(this->fields).target;
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
          pFVar3 = (this->fields).__4__this;
          if (pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0) {
            lifeTime = (pFVar3->fields).bubbleLifetimeWhenVisible;
            content = (pFVar3->fields).bubbleContent;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)(this->fields).__4__this,(MethodInfo *)0x0);
            if (x != (TextBubbleController *)0x0) {
              anchoredPosition.y = (float)pTVar2;
              anchoredPosition.x = (float)content;
              targetCenterPoint.y = (float)pTVar2;
              targetCenterPoint.x = (float)content;
              iVar4 = TextBubbleController::TextBubbleController_ShowBubble2D
                                (x,anchoredPosition,targetCenterPoint,lifeTime,content,pTVar2,
                                 (MethodInfo *)0x0);
              if (pFVar1 != (FirstTimeActivatablePointerObjectives *)0x0) {
                (pFVar1->fields).bubbleId = iVar4;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

