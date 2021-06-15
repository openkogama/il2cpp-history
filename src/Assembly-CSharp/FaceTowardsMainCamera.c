
/* Void LateUpdate() */

void Assembly-CSharp.dll::FaceTowardsMainCamera::FaceTowardsMainCamera_LateUpdate
               (FaceTowardsMainCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = (Component_1 *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (Component_1 *)0x0) {
      target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (this_01,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                  (pTVar1,target,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        fVar2 = 0.0;
        uVar3 = 0;
        uVar4 = 0;
        func_?();
        if (pTVar1 != (Transform *)0x0) {
          eulers.y = (float)uVar4;
          eulers.x = (float)uVar3;
          eulers.z = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                    (pTVar1,eulers,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

