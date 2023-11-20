
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::DeathUIPlayButton::DeathUIPlayButton_OnPointerDown
               (DeathUIPlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
    if ((this->fields).deathUIController != (DeathUIController *)0x0) {
      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar1 != (GameEventManager *)0x0) &&
         (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__7
                  ((RewardedAd *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

