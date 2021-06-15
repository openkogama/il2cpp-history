
/* Void OnValidate() */

void Assembly-CSharp.dll::MVPickupItemBaseObject::MVPickupItemBaseObject_OnValidate
               (MVPickupItemBaseObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (GreyOutObjectScript *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                     );
  (this->fields).pickupItem = pGVar1;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInChildren_12
                     ((Component_1 *)this,
                      TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponentInChildren<TriggerBoxEvents>__
                     );
  (this->fields).triggerBoxEvents = (TriggerBoxEvents *)pTVar2;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  (this->fields).audioSource = (AudioSource *)pMVar3;
  return;
}

