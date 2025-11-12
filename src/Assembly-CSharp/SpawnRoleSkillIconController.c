
/* Void ChangeColor(Color, Color) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeColor
               (SpawnRoleSkillIconController *this,Color *newIconColor,Color *newBackgroundColor,
               MethodInfo *method)

{
  pIVar1 = (this->fields).skillIcon;
  if (pIVar1 != (Image *)0x0) {
    fStack_2 = newIconColor->r;
    fStack_3 = newIconColor->g;
    fStack_4 = newIconColor->b;
    fStack_5 = newIconColor->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
    pIVar1 = (this->fields).negativeIcon;
    if (pIVar1 != (Image *)0x0) {
      fStack_2 = newIconColor->r;
      fStack_3 = newIconColor->g;
      fStack_4 = newIconColor->b;
      fStack_5 = newIconColor->a;
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
      pIVar1 = (this->fields).negativeBackgroundIcon;
      if (pIVar1 != (Image *)0x0) {
        fStack_2 = newBackgroundColor->r;
        fStack_3 = newBackgroundColor->g;
        fStack_4 = newBackgroundColor->b;
        fStack_5 = newBackgroundColor->a;
        (*(pIVar1->klass->vtable).set_color.methodPtr)
                  (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ChangeSize(Single, Single) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
               (SpawnRoleSkillIconController *this,float width,float height,MethodInfo *method)

{
  this_00 = (this->fields).skillIcon;
  if ((this_00 == (Image *)0x0) ||
     (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                      ((Graphic *)this_00,(MethodInfo *)0x0), obj == (RectTransform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  auStack_2[0] = CONCAT44(height,width);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,auStack_2[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,auStack_2);
  return;
}


/* Void HandleNegativeState(Int32) */

void Assembly-CSharp.dll::SpawnRoleSkillIconController::
     SpawnRoleSkillIconController_HandleNegativeState
               (SpawnRoleSkillIconController *this,int32_t skillCost,MethodInfo *method)

{
  pIVar1 = (this->fields).negativeIcon;
  if ((pIVar1 != (Image *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    value = (byte)((uint)skillCost >> 0x1f);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,value,(MethodInfo *)0x0);
    pIVar1 = (this->fields).negativeBackgroundIcon;
    if ((pIVar1 != (Image *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,(uint)skillCost >> 0x1f,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,value);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

