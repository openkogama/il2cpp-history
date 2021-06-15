
/* CloneBookkeeping() */

void Assembly-CSharp.dll::CloneBookkeeping::CloneBookkeeping__ctor
               (CloneBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).cloneIdIncrement = -1;
  (this->fields).cloneLinkIdIncrement = -1;
  (this->fields).cloneObjectLinkIdIncrement = -1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).linkIds = (List_1_System_Int32_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).objectLinkIds = (List_1_System_Int32_ *)pLVar1;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_int>;
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).worldObjectIdsMaps = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

