
/* Object <>m__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ConvertUtils+<TryConvertOrCast>c__AnonStorey4::
         ConvertUtils_TryConvertOrCast_c_AnonStorey4___m__0
                   (ConvertUtils_TryConvertOrCast_c_AnonStorey4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  t = (this->fields).targetType;
  pOVar1 = (this->fields).initialValue;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Object;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (t == pTVar2) {
    return pOVar1;
  }
  if ((pOVar1 == (Object *)0x0) &&
     (bVar3 = ReflectionUtils::ReflectionUtils_IsNullable(t,(MethodInfo *)0x0), bVar3 != 0)) {
    return (Object *)0x0;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    pOVar1 = (Object *)(*pcVar4)();
    return pOVar1;
  }
  (this_00->fields).state = (int32_t)method_00;
  (this_00->fields)._._._._.m_CachedPtr = pOVar1;
  (this_00->fields).originalScale.x = (float)t;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this_00,
             MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2____m__0__
             ,
             MethodInfo__Newtonsoft__Json__Utilities__Creator<System::Object>__Creator_System__Object__void__
            );
  pMVar5 = 
  bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
  ;
  bVar3 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                    ((Creator_1_System_Object_ *)this_01,(Object **)&stack0xfffffff8,
                     bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                    );
  if (bVar3 != 0) {
    return (Object *)pMVar5;
  }
  if (pOVar1 == (Object *)0x0) {
    pTVar2 = (Type *)0x0;
  }
  else {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar1 = ConvertUtils::ConvertUtils_EnsureTypeAssignable(pOVar1,pTVar2,t,(MethodInfo *)0x0);
  return pOVar1;
}

