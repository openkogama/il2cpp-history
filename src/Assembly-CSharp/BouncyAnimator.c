
/* Void OnDisable() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_OnDisable
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (Material *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?();
  }
  VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar1,StringLiteral__BouncyTex,VVar2,(MethodInfo *)0x0);
    pMVar1 = (Material *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                        (MethodInfo *)0x0);
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                (pMVar1,StringLiteral__BouncyTex,VVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_Update
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined1 *)
              UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar2 = (double)((float)puStack_1 * _UNK_?);
  func_?();
  puStack_3 = (undefined1 *)
              (_UNK_? -
              (_UNK_? -
              (float)(double)CONCAT44((uint)((ulonglong)(double)(float)dVar2 >> 0x20) &
                                      _UNK_?,SUB84((double)(float)dVar2,0) & _UNK_?))
              * _UNK_?);
  puStack_1 = (undefined1 *)((_UNK_? - (float)puStack_3) * _UNK_?);
  pMVar4 = (Material *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      (MethodInfo *)0x0);
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  func_?(&VStack_5,puStack_1,puStack_1);
  if (pMVar4 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar4,StringLiteral__BouncyTex,VStack_5,(MethodInfo *)0x0);
    pMVar4 = (Material *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                        (MethodInfo *)0x0);
    puStack_1 = puStack_3;
    VStack_5.y = (float)&UNK_?;
    puStack_3 = &stack0xffffffe4;
    func_?();
    if (pMVar4 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                (pMVar4,StringLiteral__BouncyTex,(Vector2)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

