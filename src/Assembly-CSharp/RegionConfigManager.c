
/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_get_RegionConfig
          (RegionConfigManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).regionTag;
  if (pTVar1 != (TextAsset *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                       (pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,StringLiteral_local,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return (this->fields).local;
    }
    pTVar1 = (this->fields).regionTag;
    if (pTVar1 != (TextAsset *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,StringLiteral_dev,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return (this->fields).dev;
      }
      pTVar1 = (this->fields).regionTag;
      if (pTVar1 != (TextAsset *)0x0) {
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar2,StringLiteral_test,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return (this->fields).test;
        }
        pTVar1 = (this->fields).regionTag;
        if (pTVar1 != (TextAsset *)0x0) {
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar2,StringLiteral_friends,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (this->fields).friends;
          }
          pSVar2 = RegionConfigManager_get_RegionTag(this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar2,StringLiteral_br,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (this->fields).br;
          }
          pSVar2 = RegionConfigManager_get_RegionTag(this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar2,StringLiteral_www,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (this->fields).www;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pEStack4 = TypeInfo__System__Exception;
  this_00 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,StringLiteral_RegionConfig_not_found,(MethodInfo *)0x0);
  pMStack5 = MethodInfo__RegionConfigManager__get_RegionConfig__;
  uStack6 = 0;
  pIStack7 = this_00;
  func_?();
  pcVar8 = (code *)swi(3);
  pRVar9 = (RegionConfig *)(*pcVar8)();
  return pRVar9;
}


/* String get_RegionTag() */

String * Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_get_RegionTag
                   (RegionConfigManager *this,MethodInfo *method)

{
  pTVar1 = (this->fields).regionTag;
  if (pTVar1 == (TextAsset *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pcRam_? = pcVar2;
  pSVar3 = (String *)(*pcRam_?)(pTVar1);
  return pSVar3;
}

