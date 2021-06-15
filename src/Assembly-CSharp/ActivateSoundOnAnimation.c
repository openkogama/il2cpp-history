
/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::ActivateSoundOnAnimation::ActivateSoundOnAnimation_OnAvatarAnimationChange
               (ActivateSoundOnAnimation *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).activationDataList;
  do {
    if (pLVar1 == (List_1_ActivateSoundOnAnimation_ActivationData_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<ActivateSoundOnAnimation::ActivationData>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar1 = (this->fields).activationDataList;
    if (pLVar1 == (List_1_ActivateSoundOnAnimation_ActivationData_ *)0x0) goto code_?;
    AVar4 = mscorlib.dll::System::Collections::Generic::
            List`1[ActivateSoundOnAnimation+ActivationData]::
            List_1_ActivateSoundOnAnimation_ActivationData__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<ActivateSoundOnAnimation::ActivationData>__get_Item_int_
                      );
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (AVar4.activatingAnimation,newAnimation,(MethodInfo *)0x0);
    pLVar1 = (this->fields).activationDataList;
    if (bVar5 != 0) {
      if (pLVar1 != (List_1_ActivateSoundOnAnimation_ActivationData_ *)0x0) {
        AVar4 = mscorlib.dll::System::Collections::Generic::
                List`1[ActivateSoundOnAnimation+ActivationData]::
                List_1_ActivateSoundOnAnimation_ActivationData__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<ActivateSoundOnAnimation::ActivationData>__get_Item_int_
                          );
        routine = ActivateSoundOnAnimation_PlaySound(this,AVar4.activationDelay,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* IEnumerator PlaySound(Single) */

IEnumerator *
Assembly-CSharp.dll::ActivateSoundOnAnimation::ActivateSoundOnAnimation_PlaySound
          (ActivateSoundOnAnimation *this,float activationDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ActivateSoundOnAnimation___PlaySound_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    (this_00->fields).state = (int32_t)activationDelay;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

