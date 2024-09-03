
/* SceneSettings() */

void Assembly-CSharp.dll::RTG::SceneSettings::SceneSettings__ctor
               (SceneSettings *this,MethodInfo *method)

{
  (this->fields)._physicsMode = 2;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_PhysicsMode(ScenePhysicsMode) */

void Assembly-CSharp.dll::RTG::SceneSettings::SceneSettings_set_PhysicsMode
               (SceneSettings *this,ScenePhysicsMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._physicsMode = value;
  }
  return;
}

