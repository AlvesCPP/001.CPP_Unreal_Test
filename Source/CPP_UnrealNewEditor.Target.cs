// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_UnrealNewEditorTarget : TargetRules
{
	public CPP_UnrealNewEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "CPP_UnrealNew" } );
	}
}
