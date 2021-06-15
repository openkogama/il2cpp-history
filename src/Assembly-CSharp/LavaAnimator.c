
/* Void OnDisable() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator_OnDisable
               (LavaAnimator *this,MethodInfo *method)

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
              (pMVar1,StringLiteral__NoiseATex,VVar2,(MethodInfo *)0x0);
    pMVar1 = (Material *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                        (MethodInfo *)0x0);
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (pMVar1,StringLiteral__NoiseBTex,VVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator_Update(LavaAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
  JsonProperty]::
  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,(MethodInfo *)0x0);
  pMVar1 = (Material *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      (MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTextureOffset
                      (pMVar1,StringLiteral__NoiseATex,(MethodInfo *)0x0);
    pMVar1 = (Material *)(this->fields).speedA.y;
    fVar3 = 0.0;
    d = (undefined *)
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      d = &UNK_?;
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    VVar4.y = (float)pMVar1;
    VVar4.x = fVar3;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                      (VVar4,(float)d,(MethodInfo *)0x0);
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                      (VVar4,(this->fields).speed,(MethodInfo *)0x0);
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                      (VVar2,VVar4,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (pMVar1,StringLiteral__NoiseATex,VVar2,(MethodInfo *)0x0);
      pMVar1 = (Material *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                          (MethodInfo *)0x0);
      this_00 = (Material *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                           (MethodInfo *)0x0);
      if (this_00 != (Material *)0x0) {
        VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTextureOffset
                          (this_00,StringLiteral__NoiseBTex,(MethodInfo *)0x0);
        fVar3 = (this->fields).speedB.x;
        fVar5 = (this->fields).speedB.y;
        d_00 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
        VVar2.y = fVar5;
        VVar2.x = fVar3;
        VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                          (VVar2,d_00,(MethodInfo *)0x0);
        VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                          (VVar2,(this->fields).speed,(MethodInfo *)0x0);
        VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                          (VVar4,VVar2,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                    (pMVar1,StringLiteral__NoiseBTex,VVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* LavaAnimator() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator__ctor(LavaAnimator *this,MethodInfo *method)

{
  uStack_1 = 0;
  func_?(&uStack_1,0xbf666666,0xbecccccd,0);
  (this->fields).speedA.x = (float)uStack_1;
  (this->fields).speedA.y = uStack_1._4_4_;
  uStack_2 = 0;
  func_?(&uStack_2,0x3efae148,0x3f0f5c29,0);
  (this->fields).speedB.x = (float)uStack_2;
  (this->fields).speedB.y = uStack_2._4_4_;
  (this->fields).speed = 0.5;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

