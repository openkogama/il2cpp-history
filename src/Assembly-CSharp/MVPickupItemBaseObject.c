
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
  ppGVar2 = &(this->fields).pickupItem;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,&stack0xfffffffc,&UNK_?,ppGVar2,pGVar1);
  return;
}

