
/* Object op_Implicit(StreamingAsset`2[System.Object,System.Object]) */

Object * Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
         StreamingAsset_2_System_Object_System_Object__op_Implicit
                   (StreamingAsset_2_System_Object_System_Object_ *a,MethodInfo *method)

{
  if (a != (StreamingAsset_2_System_Object_System_Object_ *)0x0) {
    return (a->fields).asset;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}

