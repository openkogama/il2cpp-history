
/* UIStack+StackElement(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack+StackElement::UIStack_StackElement__ctor
               (UIStack_StackElement *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  if (gameObject != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)gameObject,(MethodInfo *)0x0);
    iVar2 = iRam_?;
    (this->fields).name = pSVar1;
    if (iVar2 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).name >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar2 = iRam_?;
      } while (!bVar7);
    }
    (this->fields).gameObject = gameObject;
    iVar8 = 0;
    if (iVar2 != 0) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar8 = iRam_?;
      } while (!bVar7);
    }
    (this->fields).blockingObject =
         (pushOption & UIPushOption__Enum_Blocking) != UIPushOption__Enum_None ||
         (pushOption & UIPushOption__Enum_InvisibleBlocker) != UIPushOption__Enum_None;
    (this->fields).onPop = onPop;
    (this->fields).hideAll = (pushOption & UIPushOption__Enum_HideAll) != UIPushOption__Enum_None;
    (this->fields).invisibleBlocker =
         (pushOption & UIPushOption__Enum_InvisibleBlocker) != UIPushOption__Enum_None;
    (this->fields).hideAllExceptStackbottom =
         (pushOption & UIPushOption__Enum_HideAllExceptStackBottom) != UIPushOption__Enum_None;
    (this->fields).suppressInput =
         (pushOption & UIPushOption__Enum_SuppressInput) != UIPushOption__Enum_None;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).onPop >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).group = group;
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

