
/* Void OnValidate() */

void Assembly-CSharp.dll::MVPickupItemBaseObject::MVPickupItemBaseObject_OnValidate
               (MVPickupItemBaseObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponentInChildren<TriggerBoxEvents>__
                   );
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                   );
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (GreyOutObjectScript *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                     );
  (this->fields).pickupItem = pGVar1;
  func_?(&(this->fields).pickupItem,pGVar1);
  pTVar2 = (TriggerBoxEvents *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                     ((Component *)this,
                      TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponentInChildren<TriggerBoxEvents>__
                     );
  (this->fields).triggerBoxEvents = pTVar2;
  func_?(&(this->fields).triggerBoxEvents,pTVar2);
  pAVar3 = (AudioSource *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  (this->fields).audioSource = pAVar3;
  func_?(&(this->fields).audioSource,pAVar3);
  return;
}

