
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerTipNotification::PlayerTipNotification_Initialize
               (PlayerTipNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tipText;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 1;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pTVar1 != (Text *)0x0) {
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = (Object *)0x0;
        if (pOVar2->klass == pORam0000000182dc2f60) {
          pOVar3 = pOVar2;
        }
        if (pOVar3 == (Object *)0x0) {
          FUN_?(pOVar2,pORam0000000182dc2f60);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
      pNVar5 = (this->fields).fader;
      if (pNVar5 != (NotificationFade *)0x0) {
        this_00 = (pNVar5->fields).group;
        (pNVar5->fields).playing = 1;
        (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pNVar5->fields).currentTime = 0.0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

