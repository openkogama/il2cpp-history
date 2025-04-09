
/* Void BeforeDraw() */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_BeforeDraw
               (FirstTimeCubeModelBlinker *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCubeModelBase;
  if (this_00 != (MVCubeModelBase *)0x0) {
    pMVar1 = MVCubeModelBase::MVCubeModelBase_get_MeshFilters(this_00,(MethodInfo *)0x0);
    (this->fields)._.meshFilters = pMVar1;
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Material, Camera, MVCubeModelBase) */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
               (FirstTimeCubeModelBlinker *this,Material *material,Camera *targetCamera,
               MVCubeModelBase *targetCubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    func_?(&StringLiteral_CamRotateTarget);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).targetCubeModelBase;
  *ppMVar1 = targetCubeModelBase;
  func_?(ppMVar1);
  ppCVar2 = &(this->fields)._.targetCamera;
  *ppCVar2 = targetCamera;
  func_?(ppCVar2,targetCamera);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
  (this->fields)._.layerMask = iVar3;
  ppMVar4 = &(this->fields)._.blinkMaterial;
  *ppMVar4 = material;
  func_?(ppMVar4,material);
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  m = *ppMVar4;
  this_01 = (Blinker *)func_?(TypeInfo__Blinker);
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  Blinker::Blinker__ctor(this_01,2.0,m,color,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,7,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
    func_?();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

