
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandler::ToggleStateHandler_UpdateToggleState
               (ToggleStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.usingImageComponent == 0) {
    this_00 = (this->fields)._.button;
    if (this_00 == (Button *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                        ((Selectable *)this_00,(MethodInfo *)0x0);
  }
  else {
    this_01 = (this->fields)._.imageComponent;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(this_01->fields)._._._._._._._ != (void *)0x0) {
      pSVar2 = (this_01->fields).m_Sprite;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar2 != (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pSVar2->fields)._.m_CachedPtr != (void *)0x0) {
          lVar3 = 0x60;
          if ((this->fields)._.toggleState == 0) {
            lVar3 = 0x68;
          }
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_01,*(Sprite **)((longlong)&this->klass + lVar3),(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}

