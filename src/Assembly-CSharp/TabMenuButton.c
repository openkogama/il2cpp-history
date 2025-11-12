
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_Initialize
               (TabMenuButton *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__TabMenuButton____c__DisplayClass2_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabMenuButton____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TabMenuButton____c__DisplayClass2_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    *(int32_t *)&object[1].monitor = tabId;
    pTVar6 = (this->fields).buttonText;
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,categoryName,(pTVar6->klass->vtable).set_text.method);
      pBVar7 = (this->fields).button;
      if (pBVar7 != (Button *)0x0) {
        pBVar8 = (pBVar7->fields).m_OnClick;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,object,
                   MethodInfo__TabMenuButton____c__DisplayClass2_0___Initialize_b__0__,
                   (MethodInfo *)0x0);
        if (pBVar8 != (Button_ButtonClickedEvent *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_add_Delegate
                    (this_01,(UnityAction *)this_00,(MethodInfo *)0x0);
          pIVar9 = (pBVar8->fields)._._.m_Calls;
          if (pIVar9 != (InvokableCallList *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar10 = (pIVar9->fields).m_RuntimeCalls;
            if (pLVar10 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
              FUN_?(pLVar10,this_01);
              (pIVar9->fields).m_NeedsUpdate = 1;
              return;
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsDeselected
               (TabMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    aCStack_2[0].m_NormalColor.r = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
    aCStack_2[0].m_NormalColor.g = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
    aCStack_2[0].m_NormalColor.b = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
    aCStack_2[0].m_NormalColor.a = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
    uVar3._0_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
    uVar3._4_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
    uVar4._0_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
    uVar4._4_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
    uVar5._0_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
    uVar5._4_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
    uVar6._0_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
    uVar6._4_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
    uVar7._0_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
    uVar7._4_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
    uVar8._0_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
    uVar8._4_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
    uVar9._0_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
    uVar9._4_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
    uVar10._0_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
    uVar10._4_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
    uVar11._0_4_ = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
    uVar11._4_4_ = (pBVar1->fields)._.m_Colors.m_FadeDuration;
    if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      aCStack_2[0].m_NormalColor._0_8_ = uVar9;
      aCStack_2[0].m_NormalColor._8_8_ = uVar10;
      aCStack_2[0].m_HighlightedColor._0_8_ = uVar3;
      aCStack_2[0].m_HighlightedColor._8_8_ = uVar4;
      aCStack_2[0].m_PressedColor._0_8_ = uVar5;
      aCStack_2[0].m_PressedColor._8_8_ = uVar6;
      aCStack_2[0].m_SelectedColor._0_8_ = uVar7;
      aCStack_2[0].m_SelectedColor._8_8_ = uVar8;
      aCStack_2[0].m_DisabledColor._0_8_ = uVar9;
      aCStack_2[0].m_DisabledColor._8_8_ = uVar10;
      aCStack_2[0]._80_8_ = uVar11;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,aCStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsSelected
               (TabMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    aCStack_2[0].m_NormalColor.r = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
    aCStack_2[0].m_NormalColor.g = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
    aCStack_2[0].m_NormalColor.b = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
    aCStack_2[0].m_NormalColor.a = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
    uVar3._0_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
    uVar3._4_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
    uVar4._0_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
    uVar4._4_4_ = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
    uVar5._0_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
    uVar5._4_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
    uVar6._0_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
    uVar6._4_4_ = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
    uVar7._0_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
    uVar7._4_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
    uVar8._0_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
    uVar8._4_4_ = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
    uVar9._0_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
    uVar9._4_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
    uVar10._0_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
    uVar10._4_4_ = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
    uVar11._0_4_ = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
    uVar11._4_4_ = (pBVar1->fields)._.m_Colors.m_FadeDuration;
    if (*(int *)&(TypeInfo__UnityEngine__UI__ColorBlock->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      aCStack_2[0].m_NormalColor._0_8_ = uVar5;
      aCStack_2[0].m_NormalColor._8_8_ = uVar6;
      aCStack_2[0].m_HighlightedColor._0_8_ = uVar3;
      aCStack_2[0].m_HighlightedColor._8_8_ = uVar4;
      aCStack_2[0].m_PressedColor._0_8_ = uVar5;
      aCStack_2[0].m_PressedColor._8_8_ = uVar6;
      aCStack_2[0].m_SelectedColor._0_8_ = uVar7;
      aCStack_2[0].m_SelectedColor._8_8_ = uVar8;
      aCStack_2[0].m_DisabledColor._0_8_ = uVar9;
      aCStack_2[0].m_DisabledColor._8_8_ = uVar10;
      aCStack_2[0]._80_8_ = uVar11;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,aCStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

